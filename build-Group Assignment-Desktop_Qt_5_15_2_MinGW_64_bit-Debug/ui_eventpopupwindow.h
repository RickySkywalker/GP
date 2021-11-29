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
#include <QtWidgets/QLabel>
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
    QTextBrowser *event_describe;
    QPushButton *ok;
    QGraphicsView *background;
    QLabel *color_top;
    QLabel *color_left;
    QLabel *color_right;
    QLabel *add_point;
    QLabel *color_bottom;
    QMenuBar *menubar;
    QMenu *menuEvent;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EventPopUpWindow)
    {
        if (EventPopUpWindow->objectName().isEmpty())
            EventPopUpWindow->setObjectName(QString::fromUtf8("EventPopUpWindow"));
        EventPopUpWindow->resize(768, 512);
        centralwidget = new QWidget(EventPopUpWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        event_describe = new QTextBrowser(centralwidget);
        event_describe->setObjectName(QString::fromUtf8("event_describe"));
        event_describe->setGeometry(QRect(40, 200, 691, 171));
        ok = new QPushButton(centralwidget);
        ok->setObjectName(QString::fromUtf8("ok"));
        ok->setGeometry(QRect(250, 380, 261, 41));
        QFont font;
        font.setPointSize(20);
        ok->setFont(font);
        background = new QGraphicsView(centralwidget);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 771, 491));
        color_top = new QLabel(centralwidget);
        color_top->setObjectName(QString::fromUtf8("color_top"));
        color_top->setGeometry(QRect(0, 0, 771, 71));
        color_top->setAlignment(Qt::AlignCenter);
        color_left = new QLabel(centralwidget);
        color_left->setObjectName(QString::fromUtf8("color_left"));
        color_left->setEnabled(true);
        color_left->setGeometry(QRect(0, 70, 41, 401));
        color_right = new QLabel(centralwidget);
        color_right->setObjectName(QString::fromUtf8("color_right"));
        color_right->setGeometry(QRect(730, 50, 51, 411));
        add_point = new QLabel(centralwidget);
        add_point->setObjectName(QString::fromUtf8("add_point"));
        add_point->setGeometry(QRect(20, 10, 71, 51));
        add_point->setAlignment(Qt::AlignCenter);
        color_bottom = new QLabel(centralwidget);
        color_bottom->setObjectName(QString::fromUtf8("color_bottom"));
        color_bottom->setGeometry(QRect(-30, 430, 801, 61));
        EventPopUpWindow->setCentralWidget(centralwidget);
        background->raise();
        event_describe->raise();
        ok->raise();
        color_top->raise();
        color_left->raise();
        color_right->raise();
        add_point->raise();
        color_bottom->raise();
        menubar = new QMenuBar(EventPopUpWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 768, 26));
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
        event_describe->setHtml(QCoreApplication::translate("EventPopUpWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">event description</p></body></html>", nullptr));
        ok->setText(QCoreApplication::translate("EventPopUpWindow", "OK", nullptr));
        color_top->setText(QString());
        color_left->setText(QString());
        color_right->setText(QString());
        add_point->setText(QString());
        color_bottom->setText(QString());
        menuEvent->setTitle(QCoreApplication::translate("EventPopUpWindow", "Event", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EventPopUpWindow: public Ui_EventPopUpWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTPOPUPWINDOW_H
