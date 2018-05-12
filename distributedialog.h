#ifndef DISTRIBUTEDIALOG_H
#define DISTRIBUTEDIALOG_H

#include <QDialog>
#include <QList>

namespace Ui {
    class DistributeDialog;
}

class DistributeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DistributeDialog(QWidget *parent = 0);
    ~DistributeDialog();
    void setFileName(QString filename);

private slots:
    void on_checkConnectionButton_clicked();

    void on_loadButtonSurface_clicked();

    void on_loadButtonAir_clicked();

    void on_loadButtonSubSurface_clicked();

    void on_loadButtonCMS_clicked();

    void on_loadButtonAGM_clicked();

    void on_loadButtonAGS1_clicked();

    void on_loadButtonAGS2_clicked();


private:
    Ui::DistributeDialog *ui;
    bool checkConnection(QString hostname);
    void checkAllConnections();

    bool copyFileToHost(QString hostname, QString hostIP);
    QString fileName;
};

#endif // DISTRIBUTEDIALOG_H
