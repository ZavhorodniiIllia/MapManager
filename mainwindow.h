#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "qdmwina.h"
#include "common.h"
#include "mapapi.h"
#include <QTextCodec>
#include <QFileSystemModel>
#include "distributedialog.h"


namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_openButton_clicked();
    void filetreepath(const QModelIndex var);
    void on_distributeButton_clicked();

    void on_addMapToDBButton_clicked();

    void on_removeMapButton_clicked();

    void on_SortButton_clicked();

    void on_addAllMaps_clicked();

    void on_cleanFolder_clicked();

private:

    HMAP sMap;
    Ui::MainWindow *ui;
    DistributeDialog* distribDialog;

    QDMapViewWindow* mapReader;
    MapData mapData;
    MapData sMapData;
    QTextCodec* KOI8UCodec;
    void printMapData(const MapData& data);
    QString pathName;
    QString fileName;
    QString pathNameToLoad;
    QList <QFileInfo> fileList;

    void initCatalogueView();
    void folderScan(QString tmp, QString name, QString sheet);
};




#endif // MAINWINDOW_H
