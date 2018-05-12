/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTreeView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *openButton;
    QPlainTextEdit *plainTextEdit;
    QPushButton *distributeButton;
    QTreeView *treeView;
    QLabel *label;
    QPushButton *addMapToDBButton;
    QLabel *label_2;
    QLabel *filenameLabel;
    QPushButton *removeMapButton;
    QPushButton *SortButton;
    QPushButton *addAllMaps;
    QPushButton *cleanFolder;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1211, 453);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        openButton = new QPushButton(centralWidget);
        openButton->setObjectName(QString::fromUtf8("openButton"));
        openButton->setGeometry(QRect(740, 410, 151, 27));
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(740, 60, 461, 341));
        distributeButton = new QPushButton(centralWidget);
        distributeButton->setObjectName(QString::fromUtf8("distributeButton"));
        distributeButton->setGeometry(QRect(550, 410, 151, 27));
        treeView = new QTreeView(centralWidget);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setGeometry(QRect(10, 60, 701, 341));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 101, 21));
        addMapToDBButton = new QPushButton(centralWidget);
        addMapToDBButton->setObjectName(QString::fromUtf8("addMapToDBButton"));
        addMapToDBButton->setGeometry(QRect(1070, 410, 131, 27));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(750, 30, 131, 17));
        filenameLabel = new QLabel(centralWidget);
        filenameLabel->setObjectName(QString::fromUtf8("filenameLabel"));
        filenameLabel->setGeometry(QRect(930, 30, 271, 17));
        removeMapButton = new QPushButton(centralWidget);
        removeMapButton->setObjectName(QString::fromUtf8("removeMapButton"));
        removeMapButton->setGeometry(QRect(20, 410, 131, 27));
        SortButton = new QPushButton(centralWidget);
        SortButton->setObjectName(QString::fromUtf8("SortButton"));
        SortButton->setGeometry(QRect(230, 410, 181, 27));
        addAllMaps = new QPushButton(centralWidget);
        addAllMaps->setObjectName(QString::fromUtf8("addAllMaps"));
        addAllMaps->setGeometry(QRect(920, 410, 131, 27));
        cleanFolder = new QPushButton(centralWidget);
        cleanFolder->setObjectName(QString::fromUtf8("cleanFolder"));
        cleanFolder->setGeometry(QRect(456, 30, 151, 27));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\232\320\265\321\200\321\203\320\262\320\260\320\275\320\275\321\217 \320\272\320\260\321\200\321\202\320\260\320\274\320\270", 0, QApplication::UnicodeUTF8));
        openButton->setText(QApplication::translate("MainWindow", "\320\222\321\226\320\264\320\272\321\200\320\270\321\202\320\270 \320\275\320\276\320\262\321\203 \320\272\320\260\321\200\321\202\321\203", 0, QApplication::UnicodeUTF8));
        distributeButton->setText(QApplication::translate("MainWindow", "\320\240\320\276\320\267\320\277\320\276\320\264\321\226\320\273\320\265\320\275\320\275\321\217", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "\320\232\320\260\321\202\320\260\320\273\320\276\320\263 \320\272\320\260\321\200\321\202", 0, QApplication::UnicodeUTF8));
        addMapToDBButton->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\264\320\260\321\202\320\270 \320\272\320\260\321\200\321\202\321\203 ", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\320\270 \320\272\320\260\321\200\321\202\320\270:", 0, QApplication::UnicodeUTF8));
        filenameLabel->setText(QString());
        removeMapButton->setText(QApplication::translate("MainWindow", "\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270 \320\272\320\260\321\200\321\202\321\203", 0, QApplication::UnicodeUTF8));
        SortButton->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\321\203\320\262\320\260\320\275\320\275\321\217 \320\267\320\260 \320\274\320\260\321\210\321\202\320\260\320\261\320\276\320\274", 0, QApplication::UnicodeUTF8));
        addAllMaps->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\264\320\260\320\264\321\202\320\270 \320\272\320\260\321\202\320\260\320\273\320\276\320\263", 0, QApplication::UnicodeUTF8));
        cleanFolder->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\320\270 \320\272\320\260\321\202\320\260\320\273\320\276\320\263", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
