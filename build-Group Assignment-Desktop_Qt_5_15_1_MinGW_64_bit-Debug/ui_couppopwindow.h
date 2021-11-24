/********************************************************************************
** Form generated from reading UI file 'couppopwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COUPPOPWINDOW_H
#define UI_COUPPOPWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CoupPopWindow
{
public:
    QWidget *centralwidget;
    QTextBrowser *header;
    QTextBrowser *curr_used;
    QPushButton *decrease;
    QPushButton *increase;
    QPushButton *go;
    QPushButton *cancel;
    QGraphicsView *graphicsView;
    QMenuBar *menubar;
    QMenu *menuCOUP;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CoupPopWindow)
    {
        if (CoupPopWindow->objectName().isEmpty())
            CoupPopWindow->setObjectName(QString::fromUtf8("CoupPopWindow"));
        CoupPopWindow->resize(640, 480);
        centralwidget = new QWidget(CoupPopWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        header = new QTextBrowser(centralwidget);
        header->setObjectName(QString::fromUtf8("header"));
        header->setGeometry(QRect(170, 80, 256, 91));
        curr_used = new QTextBrowser(centralwidget);
        curr_used->setObjectName(QString::fromUtf8("curr_used"));
        curr_used->setGeometry(QRect(220, 210, 151, 121));
        decrease = new QPushButton(centralwidget);
        decrease->setObjectName(QString::fromUtf8("decrease"));
        decrease->setGeometry(QRect(60, 240, 80, 71));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/Photo/less_point_used.png"), QSize(), QIcon::Normal, QIcon::Off);
        decrease->setIcon(icon);
        decrease->setIconSize(QSize(50, 50));
        increase = new QPushButton(centralwidget);
        increase->setObjectName(QString::fromUtf8("increase"));
        increase->setGeometry(QRect(430, 240, 80, 71));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/Photo/next.png"), QSize(), QIcon::Normal, QIcon::Off);
        increase->setIcon(icon1);
        increase->setIconSize(QSize(50, 50));
        go = new QPushButton(centralwidget);
        go->setObjectName(QString::fromUtf8("go"));
        go->setGeometry(QRect(150, 360, 111, 61));
        QFont font;
        font.setPointSize(15);
        go->setFont(font);
        cancel = new QPushButton(centralwidget);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(350, 360, 131, 61));
        cancel->setFont(font);
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 641, 441));
        CoupPopWindow->setCentralWidget(centralwidget);
        graphicsView->raise();
        header->raise();
        curr_used->raise();
        decrease->raise();
        increase->raise();
        go->raise();
        cancel->raise();
        menubar = new QMenuBar(CoupPopWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 640, 21));
        menuCOUP = new QMenu(menubar);
        menuCOUP->setObjectName(QString::fromUtf8("menuCOUP"));
        CoupPopWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(CoupPopWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CoupPopWindow->setStatusBar(statusbar);

        menubar->addAction(menuCOUP->menuAction());

        retranslateUi(CoupPopWindow);

        QMetaObject::connectSlotsByName(CoupPopWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CoupPopWindow)
    {
        CoupPopWindow->setWindowTitle(QCoreApplication::translate("CoupPopWindow", "MainWindow", nullptr));
        header->setHtml(QCoreApplication::translate("CoupPopWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">Point used</span></p></body></html>", nullptr));
        curr_used->setHtml(QCoreApplication::translate("CoupPopWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">2</span></p></body></html>", nullptr));
        decrease->setText(QString());
        increase->setText(QString());
        go->setText(QCoreApplication::translate("CoupPopWindow", "GO!", nullptr));
        cancel->setText(QCoreApplication::translate("CoupPopWindow", "Cancel", nullptr));
        menuCOUP->setTitle(QCoreApplication::translate("CoupPopWindow", "COUP!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CoupPopWindow: public Ui_CoupPopWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COUPPOPWINDOW_H
