/********************************************************************************
** Form generated from reading UI file 'coupdialogwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COUPDIALOGWINDOW_H
#define UI_COUPDIALOGWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_CoupDialogWindow
{
public:
    QDialogButtonBox *buttonBox;
    QTextBrowser *curr_used;
    QPushButton *increase;
    QTextBrowser *header;
    QPushButton *decrease;

    void setupUi(QDialog *CoupDialogWindow)
    {
        if (CoupDialogWindow->objectName().isEmpty())
            CoupDialogWindow->setObjectName(QString::fromUtf8("CoupDialogWindow"));
        CoupDialogWindow->resize(640, 480);
        buttonBox = new QDialogButtonBox(CoupDialogWindow);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 440, 621, 32));
        QFont font;
        font.setPointSize(20);
        buttonBox->setFont(font);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        curr_used = new QTextBrowser(CoupDialogWindow);
        curr_used->setObjectName(QString::fromUtf8("curr_used"));
        curr_used->setGeometry(QRect(230, 200, 151, 121));
        increase = new QPushButton(CoupDialogWindow);
        increase->setObjectName(QString::fromUtf8("increase"));
        increase->setGeometry(QRect(440, 230, 80, 71));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/Photo/next.png"), QSize(), QIcon::Normal, QIcon::Off);
        increase->setIcon(icon);
        increase->setIconSize(QSize(50, 50));
        header = new QTextBrowser(CoupDialogWindow);
        header->setObjectName(QString::fromUtf8("header"));
        header->setGeometry(QRect(180, 70, 256, 91));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Comic Sans MS"));
        header->setFont(font1);
        decrease = new QPushButton(CoupDialogWindow);
        decrease->setObjectName(QString::fromUtf8("decrease"));
        decrease->setGeometry(QRect(70, 230, 80, 71));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/Photo/less_point_used.png"), QSize(), QIcon::Normal, QIcon::Off);
        decrease->setIcon(icon1);
        decrease->setIconSize(QSize(50, 50));

        retranslateUi(CoupDialogWindow);
        QObject::connect(buttonBox, SIGNAL(accepted()), CoupDialogWindow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CoupDialogWindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(CoupDialogWindow);
    } // setupUi

    void retranslateUi(QDialog *CoupDialogWindow)
    {
        CoupDialogWindow->setWindowTitle(QCoreApplication::translate("CoupDialogWindow", "Dialog", nullptr));
        curr_used->setHtml(QCoreApplication::translate("CoupDialogWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">2</span></p></body></html>", nullptr));
        increase->setText(QString());
        header->setHtml(QCoreApplication::translate("CoupDialogWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Comic Sans MS'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:28pt;\">Point used</span></p></body></html>", nullptr));
        decrease->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CoupDialogWindow: public Ui_CoupDialogWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COUPDIALOGWINDOW_H
