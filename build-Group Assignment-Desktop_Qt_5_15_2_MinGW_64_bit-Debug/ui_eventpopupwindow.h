/********************************************************************************
** Form generated from reading UI file 'eventpopupwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTPOPUPWINDOW_H
#define UI_EVENTPOPUPWINDOW_H

#include <QtCore/QVariant>
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

class Ui_EventPopUpWindow
{
public:
    QWidget *centralwidget;
    QTextBrowser *event_name;
    QTextBrowser *event_describe;
    QPushButton *ok;
    QGraphicsView *background;
    QTextBrowser *add_point;
    QMenuBar *menubar;
    QMenu *menuEvent;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EventPopUpWindow)
    {
        if (EventPopUpWindow->objectName().isEmpty())
            EventPopUpWindow->setObjectName(QString::fromUtf8("EventPopUpWindow"));
        EventPopUpWindow->resize(640, 480);
        centralwidget = new QWidget(EventPopUpWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        event_name = new QTextBrowser(centralwidget);
        event_name->setObjectName(QString::fromUtf8("event_name"));
        event_name->setGeometry(QRect(170, 20, 251, 41));
        event_describe = new QTextBrowser(centralwidget);
        event_describe->setObjectName(QString::fromUtf8("event_describe"));
        event_describe->setGeometry(QRect(70, 120, 471, 161));
        ok = new QPushButton(centralwidget);
        ok->setObjectName(QString::fromUtf8("ok"));
        ok->setGeometry(QRect(170, 350, 261, 41));
        QFont font;
        font.setPointSize(20);
        ok->setFont(font);
        background = new QGraphicsView(centralwidget);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 641, 431));
        add_point = new QTextBrowser(centralwidget);
        add_point->setObjectName(QString::fromUtf8("add_point"));
        add_point->setGeometry(QRect(30, 30, 71, 61));
        EventPopUpWindow->setCentralWidget(centralwidget);
        background->raise();
        event_name->raise();
        event_describe->raise();
        ok->raise();
        add_point->raise();
        menubar = new QMenuBar(EventPopUpWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 640, 21));
        menuEvent = new QMenu(menubar);
        menuEvent->setObjectName(QString::fromUtf8("menuEvent"));
        EventPopUpWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(EventPopUpWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        EventPopUpWindow->setStatusBar(statusbar);

        menubar->addAction(menuEvent->menuAction());

        retranslateUi(EventPopUpWindow);

        QMetaObject::connectSlotsByName(EventPopUpWindow);
    } // setupUi

    void retranslateUi(QMainWindow *EventPopUpWindow)
    {
        EventPopUpWindow->setWindowTitle(QCoreApplication::translate("EventPopUpWindow", "MainWindow", nullptr));
        event_name->setHtml(QCoreApplication::translate("EventPopUpWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Event name</p></body></html>", nullptr));
        event_describe->setHtml(QCoreApplication::translate("EventPopUpWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">event description</p></body></html>", nullptr));
        ok->setText(QCoreApplication::translate("EventPopUpWindow", "OK", nullptr));
        add_point->setHtml(QCoreApplication::translate("EventPopUpWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">point added</p></body></html>", nullptr));
        menuEvent->setTitle(QCoreApplication::translate("EventPopUpWindow", "Event", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EventPopUpWindow: public Ui_EventPopUpWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTPOPUPWINDOW_H
