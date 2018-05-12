/********************************************************************************
** Form generated from reading UI file 'distributedialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISTRIBUTEDIALOG_H
#define UI_DISTRIBUTEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DistributeDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *labelSurface;
    QPushButton *loadButtonSurface;
    QPushButton *loadButtonAir;
    QLabel *labelAir;
    QLabel *labelSubSurface;
    QPushButton *loadButtonSubSurface;
    QLabel *labelCMS;
    QPushButton *loadButtonCMS;
    QPushButton *loadButtonAGS2;
    QLabel *labelAGS1;
    QPushButton *loadButtonAGM;
    QLabel *labelAGM;
    QPushButton *loadButtonAGS1;
    QLabel *labelAGS2;
    QPushButton *checkConnectionButton;

    void setupUi(QDialog *DistributeDialog)
    {
        if (DistributeDialog->objectName().isEmpty())
            DistributeDialog->setObjectName(QString::fromUtf8("DistributeDialog"));
        DistributeDialog->resize(441, 210);
        buttonBox = new QDialogButtonBox(DistributeDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setEnabled(true);
        buttonBox->setGeometry(QRect(230, 170, 181, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        labelSurface = new QLabel(DistributeDialog);
        labelSurface->setObjectName(QString::fromUtf8("labelSurface"));
        labelSurface->setGeometry(QRect(11, 16, 81, 20));
        loadButtonSurface = new QPushButton(DistributeDialog);
        loadButtonSurface->setObjectName(QString::fromUtf8("loadButtonSurface"));
        loadButtonSurface->setGeometry(QRect(100, 10, 111, 27));
        loadButtonAir = new QPushButton(DistributeDialog);
        loadButtonAir->setObjectName(QString::fromUtf8("loadButtonAir"));
        loadButtonAir->setGeometry(QRect(100, 50, 111, 27));
        labelAir = new QLabel(DistributeDialog);
        labelAir->setObjectName(QString::fromUtf8("labelAir"));
        labelAir->setGeometry(QRect(11, 56, 71, 20));
        labelSubSurface = new QLabel(DistributeDialog);
        labelSubSurface->setObjectName(QString::fromUtf8("labelSubSurface"));
        labelSubSurface->setGeometry(QRect(11, 96, 71, 20));
        loadButtonSubSurface = new QPushButton(DistributeDialog);
        loadButtonSubSurface->setObjectName(QString::fromUtf8("loadButtonSubSurface"));
        loadButtonSubSurface->setGeometry(QRect(100, 90, 111, 27));
        labelCMS = new QLabel(DistributeDialog);
        labelCMS->setObjectName(QString::fromUtf8("labelCMS"));
        labelCMS->setGeometry(QRect(11, 136, 71, 20));
        loadButtonCMS = new QPushButton(DistributeDialog);
        loadButtonCMS->setObjectName(QString::fromUtf8("loadButtonCMS"));
        loadButtonCMS->setGeometry(QRect(100, 130, 111, 27));
        loadButtonAGS2 = new QPushButton(DistributeDialog);
        loadButtonAGS2->setObjectName(QString::fromUtf8("loadButtonAGS2"));
        loadButtonAGS2->setGeometry(QRect(310, 94, 111, 27));
        labelAGS1 = new QLabel(DistributeDialog);
        labelAGS1->setObjectName(QString::fromUtf8("labelAGS1"));
        labelAGS1->setGeometry(QRect(230, 60, 71, 20));
        loadButtonAGM = new QPushButton(DistributeDialog);
        loadButtonAGM->setObjectName(QString::fromUtf8("loadButtonAGM"));
        loadButtonAGM->setGeometry(QRect(310, 14, 111, 27));
        labelAGM = new QLabel(DistributeDialog);
        labelAGM->setObjectName(QString::fromUtf8("labelAGM"));
        labelAGM->setGeometry(QRect(230, 20, 71, 20));
        loadButtonAGS1 = new QPushButton(DistributeDialog);
        loadButtonAGS1->setObjectName(QString::fromUtf8("loadButtonAGS1"));
        loadButtonAGS1->setGeometry(QRect(310, 54, 111, 27));
        labelAGS2 = new QLabel(DistributeDialog);
        labelAGS2->setObjectName(QString::fromUtf8("labelAGS2"));
        labelAGS2->setGeometry(QRect(230, 100, 71, 20));
        checkConnectionButton = new QPushButton(DistributeDialog);
        checkConnectionButton->setObjectName(QString::fromUtf8("checkConnectionButton"));
        checkConnectionButton->setGeometry(QRect(10, 170, 191, 27));

        retranslateUi(DistributeDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), DistributeDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DistributeDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(DistributeDialog);
    } // setupUi

    void retranslateUi(QDialog *DistributeDialog)
    {
        DistributeDialog->setWindowTitle(QApplication::translate("DistributeDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        labelSurface->setText(QApplication::translate("DistributeDialog", "\320\220\320\240\320\234 \320\236\320\237\320\222\320\235\320\236", 0, QApplication::UnicodeUTF8));
        loadButtonSurface->setText(QApplication::translate("DistributeDialog", "\320\227\320\260\320\262\320\260\320\275\321\202\320\260\320\266\320\270\321\202\320\270", 0, QApplication::UnicodeUTF8));
        loadButtonAir->setText(QApplication::translate("DistributeDialog", "\320\227\320\260\320\262\320\260\320\275\321\202\320\260\320\266\320\270\321\202\320\270", 0, QApplication::UnicodeUTF8));
        labelAir->setText(QApplication::translate("DistributeDialog", "\320\220\320\240\320\234 \320\237\320\262\320\236", 0, QApplication::UnicodeUTF8));
        labelSubSurface->setText(QApplication::translate("DistributeDialog", "\320\220\320\240\320\234 \320\237\320\264\320\236", 0, QApplication::UnicodeUTF8));
        loadButtonSubSurface->setText(QApplication::translate("DistributeDialog", "\320\227\320\260\320\262\320\260\320\275\321\202\320\260\320\266\320\270\321\202\320\270", 0, QApplication::UnicodeUTF8));
        labelCMS->setText(QApplication::translate("DistributeDialog", "\320\220\320\240\320\234 \320\237\320\221\320\243", 0, QApplication::UnicodeUTF8));
        loadButtonCMS->setText(QApplication::translate("DistributeDialog", "\320\227\320\260\320\262\320\260\320\275\321\202\320\260\320\266\320\270\321\202\320\270", 0, QApplication::UnicodeUTF8));
        loadButtonAGS2->setText(QApplication::translate("DistributeDialog", "\320\227\320\260\320\262\320\260\320\275\321\202\320\260\320\266\320\270\321\202\320\270", 0, QApplication::UnicodeUTF8));
        labelAGS1->setText(QApplication::translate("DistributeDialog", "\320\220\320\240\320\234 \320\220\320\243\320\2341", 0, QApplication::UnicodeUTF8));
        loadButtonAGM->setText(QApplication::translate("DistributeDialog", "\320\227\320\260\320\262\320\260\320\275\321\202\320\260\320\266\320\270\321\202\320\270", 0, QApplication::UnicodeUTF8));
        labelAGM->setText(QApplication::translate("DistributeDialog", "\320\220\320\240\320\234 \320\220\320\243\320\241", 0, QApplication::UnicodeUTF8));
        loadButtonAGS1->setText(QApplication::translate("DistributeDialog", "\320\227\320\260\320\262\320\260\320\275\321\202\320\260\320\266\320\270\321\202\320\270", 0, QApplication::UnicodeUTF8));
        labelAGS2->setText(QApplication::translate("DistributeDialog", "\320\220\320\240\320\234 \320\220\320\243\320\2342", 0, QApplication::UnicodeUTF8));
        checkConnectionButton->setText(QApplication::translate("DistributeDialog", "\320\237\320\265\321\200\320\265\320\262\321\226\321\200\320\270\321\202\320\270 \320\267\342\200\231\321\224\320\264\320\275\320\260\320\275\320\275\321\217", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DistributeDialog: public Ui_DistributeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISTRIBUTEDIALOG_H
