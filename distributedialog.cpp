#include "distributedialog.h"
#include "ui_distributedialog.h"

#include <QProcess>
#include <QDebug>

DistributeDialog::DistributeDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DistributeDialog)
{
    ui->setupUi(this);

    fileName = "";
}

DistributeDialog::~DistributeDialog()
{
    delete ui;
}

void DistributeDialog::setFileName(QString filename)
{
    fileName = filename;
}

bool DistributeDialog::checkConnection(QString hostname)
{
    QString parameter = "-c 1";

    int exitCode = QProcess::execute("ping", QStringList() << parameter << hostname);
    if (exitCode==0) {
        return true;
    } else {
        return false;
    }
}

void DistributeDialog::on_checkConnectionButton_clicked()
{
    checkAllConnections();
}

void DistributeDialog::checkAllConnections()
{
    //check surface console
    if (checkConnection("192.168.0.193") || checkConnection("192.168.1.193")){
        ui->labelSurface->setStyleSheet("QLabel { background-color : rgb(0, 255, 0); }");
    } else {
        ui->labelSurface->setStyleSheet("QLabel { background-color : red; }");
    }

    //check air console
    if (checkConnection("192.168.0.192") || checkConnection("192.168.1.192")){
        ui->labelAir->setStyleSheet("QLabel { background-color : rgb(0, 255, 0); }");
    } else {
        ui->labelAir->setStyleSheet("QLabel { background-color : red; }");
    }

    //check sub-surface console
    if (checkConnection("192.168.0.194")){
        ui->labelSubSurface->setStyleSheet("QLabel { background-color : rgb(0, 255, 0); }");
    } else {
        ui->labelSubSurface->setStyleSheet("QLabel { background-color : red; }");
    }

    //check cms console
    if (checkConnection("192.168.0.197")){
        ui->labelCMS->setStyleSheet("QLabel { background-color : rgb(0, 255, 0); }");
    } else {
        ui->labelCMS->setStyleSheet("QLabel { background-color : red; }");
    }

    //check agm console
    if (checkConnection("192.168.0.190")){
        ui->labelAGM->setStyleSheet("QLabel { background-color : rgb(0, 255, 0); }");
    } else {
        ui->labelAGM->setStyleSheet("QLabel { background-color : red; }");
    }

    //check ags1 console
    if (checkConnection("192.168.0.189")){
        ui->labelAGS1->setStyleSheet("QLabel { background-color : rgb(0, 255, 0); }");
    } else {
        ui->labelAGS1->setStyleSheet("QLabel { background-color : red; }");
    }

    //check ags2 console
    if (checkConnection("192.168.0.188")){
        ui->labelAGS2->setStyleSheet("QLabel { background-color : rgb(0, 255, 0); }");
    } else {
        ui->labelAGS2->setStyleSheet("QLabel { background-color : red; }");
    }
}

bool DistributeDialog::copyFileToHost(QString hostname, QString hostIP)
{
    QString path = QString("%1@%2:/home/%1/Maps/").arg(hostname).arg(hostIP);

    int exitCode = QProcess::execute("scp", QStringList() << fileName << path);
    if (exitCode==0) {
        qDebug() << "success";
        return true;
    } else {
        qDebug() << "failed" << exitCode;
        return false;
    }
}

void DistributeDialog::on_loadButtonSurface_clicked()
{
    copyFileToHost("sp","192.168.0.193");
}

void DistributeDialog::on_loadButtonAir_clicked()
{
    copyFileToHost("ap","192.168.0.192");

}

void DistributeDialog::on_loadButtonSubSurface_clicked()
{
    copyFileToHost("ssp","192.168.0.194");
}

void DistributeDialog::on_loadButtonCMS_clicked()
{
    copyFileToHost("pbu","192.168.0.197");
}

void DistributeDialog::on_loadButtonAGM_clicked()
{
    copyFileToHost("pc16","192.168.0.190");
}

void DistributeDialog::on_loadButtonAGS1_clicked()
{
    copyFileToHost("pc27","192.168.0.189");
}

void DistributeDialog::on_loadButtonAGS2_clicked()
{
    copyFileToHost("aum2","192.168.0.188");
}
