#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QFileDialog>
#include <QDir>
#include <QMessageBox>
#include <QProcess>
#include <QTableWidget>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    distribDialog = new DistributeDialog(this);
    mapReader = new QDMapViewWindow(this);
    KOI8UCodec = QTextCodec::codecForName("KOI8-U");
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    pathName = "";
    fileName = "";
    pathNameToLoad = "";

    initCatalogueView();
    //Get file path from treeview
    connect(ui->treeView,SIGNAL(clicked(QModelIndex)),this,SLOT(filetreepath(const QModelIndex)));
}

void MainWindow::initCatalogueView()
{

    QString path = "/tmp/mntMapsServer";
    QFileSystemModel *model = new QFileSystemModel;
    model->setRootPath(path);

    QStringList filter;
    filter << "*.sit";
    model->setNameFilters(filter);
    model->setNameFilterDisables(false);
    ui->treeView->setModel(model);
    ui->treeView->header()->hide();


    // Demonstrating look and feel features
    ui->treeView->setAnimated(true);
    ui->treeView->setIndentation(20);
    ui->treeView->setSortingEnabled(true);
    ui->treeView->setRootIndex(model->index(path));

}

MainWindow::~MainWindow()
{
    delete ui;
    delete distribDialog;
    delete mapReader;
}

void MainWindow::on_openButton_clicked()
{
    pathNameToLoad = QFileDialog::getOpenFileName(this, QString::null,  QDir::currentPath(),
                       "Sites (*.sit)" );

    if (pathNameToLoad.isEmpty()) return;

    mapReader->openMap(pathNameToLoad, &mapData);
    printMapData(mapData);
    mapData.clearStructList();


    QStringList path_parts = pathNameToLoad.split('/');
    QString _fileName = path_parts.at(path_parts.size()-1);
    ui->filenameLabel->setText(_fileName);
}

void MainWindow::filetreepath(const QModelIndex var)
{
    QFileSystemModel *model = new QFileSystemModel;
    model->setRootPath(QDir::currentPath());

    QString checkSit = model->fileName(var);
    if(checkSit.contains(".sit."))
    {
        return;
    }

    if (checkSit.contains(".sit"))
    {
        fileName = model->fileName(var);
        pathName = model->filePath(var);
        ui->filenameLabel->setText(fileName);
        mapReader->openMap(pathName, &mapData);
        printMapData(mapData);
        mapData.clearStructList();
    }
}

void MainWindow::printMapData(const MapData& data)
{
    QString text = "";
    text.append(QString(" NW шир: %1 NW дов: %2\n").arg(data.latNW).arg(data.lonNW));
    text.append(QString(" SW шир: %1 SW дов: %2\n").arg(data.latSW).arg(data.lonSW));
    text.append(QString(" NE шир: %1 NE дов: %2\n").arg(data.latNE).arg(data.lonNE));
    text.append(QString(" SE шир: %1 SE дов: %2\n").arg(data.latSE).arg(data.lonSE));


    text.append("\n Масштаб:\n");
    QString scale = QString("\t%1\n").arg(data.scale);
    text.append(scale);

    text.append("\n Лист:\n");
    for(int i = 0; i < data.sheetCount; i++){
        QString sheet = QString("\t%1\n").arg(data.sheets.at(i));
        text.append(sheet);
    }

    text.append("\n Слои:\n");
    for(int i = 0; i < data.layers.count(); i++){        
        QString layerInfo = QString("\t%1\n").arg(data.layers.at(i));
        text.append(layerInfo);
    }

    ui->plainTextEdit->setPlainText(text);
}

void MainWindow::folderScan(QString tmp, QString name, QString sheet){
    QDir dir;
    dir.setPath(tmp);
    QString log = name + "s57.*";
    name+=".*";
    sheet+=".*";
    QStringList filter;
    filter << name << sheet << log;
    fileList = dir.entryInfoList(filter, QDir::Files, QDir::Name);
    tmp+="/LOG";
    dir.setPath(tmp);
    fileList.append(dir.entryInfoList(filter,QDir::Files, QDir::Name));
}

void MainWindow::on_distributeButton_clicked()
{
    if (pathName.isEmpty()){
        QMessageBox msgBox;
        msgBox.setText("Спочатку оберіть карту!");
        msgBox.exec();
        return;
    } else {
        distribDialog->setFileName(pathName);
        distribDialog->show();        
    }
}

void MainWindow::on_addMapToDBButton_clicked(){
    if (pathNameToLoad.isEmpty()){
        QMessageBox msgBox;
        msgBox.setText("Спочатку оберіть карту!");
        msgBox.exec();
        return;
    }
    else
    {
        QFileInfo tmp = pathNameToLoad;
        QString path ="/tmp/mntMapsServer/";

        sMap  = mapOpenData(pathNameToLoad.toLatin1().data(),0);
        sMapData.sheets.append(KOI8UCodec->toUnicode(mapGetListName(sMap,1)));
        folderScan(tmp.absolutePath(), tmp.baseName(), sMapData.sheets[0]);
        mapReader->closeMap();
        QProcess::execute("mkdir", QStringList() << "-p" << path);
        QProcess::execute("mkdir", QStringList() << "-p" << path + "LOG");
        QProcess::execute("cp", QStringList() << "-n" << tmp.absolutePath() + "/s57navy.rsc" << path);
        for(int i = 0; i <= fileList.size()-1; i++){
            if(fileList[i].suffix() == "LOG" || fileList[i].suffix() == "TAC"){
                QProcess::execute("cp", QStringList() << fileList[i].absoluteFilePath() << path +"/LOG/");
            }
            else{
            QProcess::execute("cp", QStringList() << fileList[i].absoluteFilePath() << path);
            }
        }
        sMapData.clearStructList();
        fileList.clear();
        initCatalogueView();
    }

}
void MainWindow::on_addAllMaps_clicked()
{
    if (pathNameToLoad.isEmpty()){
        QMessageBox msgBox;
        msgBox.setText("Спочатку оберіть карту!!");
        msgBox.exec();
        return;
    }
    else
    {
        QString parameter = "-r";
        QString path = "/tmp/mntMapsServer/";
        QFileInfo tmp = pathNameToLoad;
        QDir dir = tmp.absolutePath();

        QStringList filter("*.sit");
        QFileInfoList mapFile = dir.entryInfoList(QStringList(filter), QDir::Files, QDir::Name);
        QProcess::execute("mkdir", QStringList() << "-p" << path);
        QProcess::execute("cp", QStringList() << parameter << tmp.absolutePath() + "/s57navy.rsc" << path);
        QProcess::execute("mkdir", QStringList() << "-p" << path + "/LOG");
        for(int i = 0; i < mapFile.size(); i++){
            sMap = mapOpenData(mapFile[i].absoluteFilePath().toLatin1().data(),0);
            sMapData.sheets.append(KOI8UCodec->toUnicode(mapGetListName(sMap,1)));

            folderScan(mapFile[i].absolutePath(), mapFile[i].baseName(), sMapData.sheets[i]);

            mapCloseMap(sMap);         

            for(int j= 0 ;j <= fileList.size() - 1; j++){
                if(fileList[j].suffix() == "LOG" || fileList[j].suffix() == "TAC"){
                    QProcess::execute("cp", QStringList() << fileList[j].absoluteFilePath() << path+"/LOG/");
                }
                else{
                    QProcess::execute("cp", QStringList() << fileList[j].absoluteFilePath() << path);
                }
            }
            fileList.clear();
        }
        sMapData.clearStructList();
        fileList.clear();
        initCatalogueView();
    }
}

void MainWindow::on_removeMapButton_clicked()
{
    if (pathName.isEmpty()){
        QMessageBox msgBox;
        msgBox.setText("Спочатку оберіть карту!!");
        msgBox.exec();
        return;
    }
    else
    {
        QFileInfo tmp(pathName);
        QString parameter = "-rf";
        QDir dir = tmp.absolutePath();

        sMap  = mapOpenData(pathName.toLatin1().data(),0);
        sMapData.sheets.append(KOI8UCodec->toUnicode(mapGetListName(sMap,1)));

        mapReader->closeMap();
        ui->plainTextEdit->setPlainText("");
        ui->filenameLabel->setText("");

        folderScan(tmp.absolutePath(), tmp.baseName(), sMapData.sheets[0]);
        for(int i= 0; i<= fileList.count()-1; i++){
            QProcess::execute("rm", QStringList() << parameter << fileList[i].absoluteFilePath());
        }
        if(dir.count() == 4){
            QProcess::execute("rm", QStringList() << parameter << dir.absolutePath());
        }
        else{
            dir = tmp.absolutePath() + "/LOG";
            if(dir.count() == 2){
                QProcess::execute("rm", QStringList() << parameter << dir.absolutePath());
            }
        }
        sMapData.clearStructList();
        fileList.clear();
    }
    initCatalogueView();
}

void MainWindow::on_cleanFolder_clicked(){
    if (pathName.isEmpty()){
        QMessageBox msgBox;
        msgBox.setText("Спочатку оберіть карту!!");
        msgBox.exec();
        return;
    }
    else
    {
        mapReader->closeMap();
        ui->plainTextEdit->setPlainText("");
        ui->filenameLabel->setText("");
        QString parameter = "-rf";

        int index = pathName.lastIndexOf("/");
        QString tmp = pathName;
        tmp.truncate(index+1);
        qDebug() << tmp;
        QProcess::execute("rm", QStringList() << parameter << tmp);
        initCatalogueView();
    }

}

void MainWindow::on_SortButton_clicked()
{
    sMap = 0;
    QDir dir("/tmp/mntMapsServer");
    QString folder="";
    QList <QFileInfo> maxScaleMap;
    long maxScale=-1;
    if(!QDir::setCurrent("/tmp/mntMapsServer")){
       QMessageBox msgBox;
       msgBox.setText("Folder is ERR0R");
       msgBox.exec();
       return;
    }
    else{
       QStringList filter("*.sit");
       QFileInfoList mapFile = dir.entryInfoList(QStringList(filter), QDir::Files, QDir::Name);

       for(int i = 0; i < mapFile.size(); i++){
           sMap = mapOpenData(mapFile[i].absoluteFilePath().toLatin1().data(),0);
           sMapData.scale = mapGetShowScale(sMap);
           sMapData.sheets.append(KOI8UCodec->toUnicode(mapGetListName(sMap,1)));

           folderScan(mapFile[i].absolutePath(), mapFile[i].baseName(), sMapData.sheets[i]);

           mapCloseMap(sMap);
           if(sMapData.scale > maxScale){
               if(maxScale !=-1){
                   folder = "/tmp/mntMapsServer/" + QString::number(maxScale);
                   QProcess::execute("mkdir", QStringList() << "-p" << folder);
                   QProcess::execute("mkdir", QStringList() << "-p" << folder + "/LOG");
                   for(int j = 0; j<= maxScaleMap.size()-1; j++){
                       if(maxScaleMap[j].suffix() == "LOG" || maxScaleMap[j].suffix() == "TAC"){
                           QProcess::execute("mv", QStringList() << "-t" << folder + "/LOG" << maxScaleMap[j].absoluteFilePath());
                       }
                       else{
                           QProcess::execute("mv", QStringList() << "-t" << folder << maxScaleMap[j].absoluteFilePath());
                       }
                   }

               }
               maxScale = sMapData.scale;
               maxScaleMap.swap(fileList);
           }
           else{
               folder = "/tmp/mntMapsServer/" + QString::number(sMapData.scale);
               QProcess::execute("mkdir", QStringList() << "-p" << folder);
               QProcess::execute("mkdir", QStringList() << "-p" << folder + "/LOG");
               for(int j = 0; j<= fileList.size()-1; j++){
                   if(fileList[j].suffix() == "LOG" || fileList[j].suffix() == "TAC"){
                       QProcess::execute("mv", QStringList() << "-t" << folder + "/LOG" << fileList[j].absoluteFilePath());
                   }
                   else{
                       QProcess::execute("mv", QStringList() << "-t" << folder << fileList[j].absoluteFilePath());
                   }
               }

           }
           QProcess::execute("cp", QStringList() << "-n" << dir.absolutePath()+"/s57navy.rsc" << folder);
           fileList.clear();
       }
       sMapData.clearStructList();
   }
}
