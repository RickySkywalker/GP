/********************************************************************************
** Form generated from reading UI file 'menuwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUWINDOW_H
#define UI_MENUWINDOW_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QPushButton *NewGame;
    QPushButton *LoadGame;
    QPushButton *Exit;
    QLabel *Heading_Lite;
    QLabel *Heading_Twilight;
    QLabel *Heading_Struggle;
    QMenuBar *menubar;
    QMenu *menuTW_lite;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MenuWindow)
    {
        if (MenuWindow->objectName().isEmpty())
            MenuWindow->setObjectName(QString::fromUtf8("MenuWindow"));
        MenuWindow->resize(1200, 800);
        MenuWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MenuWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 1200, 800));
        graphicsView->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/Photo/Menu Window.jpg);"));
        NewGame = new QPushButton(centralwidget);
        NewGame->setObjectName(QString::fromUtf8("NewGame"));
        NewGame->setGeometry(QRect(480, 330, 251, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("Dubai Medium"));
        font.setPointSize(25);
        font.setBold(false);
        font.setWeight(50);
        NewGame->setFont(font);
        LoadGame = new QPushButton(centralwidget);
        LoadGame->setObjectName(QString::fromUtf8("LoadGame"));
        LoadGame->setGeometry(QRect(480, 460, 251, 81));
        LoadGame->setFont(font);
        Exit = new QPushButton(centralwidget);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        Exit->setGeometry(QRect(480, 590, 251, 81));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Dubai Medium"));
        font1.setPointSize(25);
        font1.setBold(true);
        font1.setWeight(75);
        Exit->setFont(font1);
        Heading_Lite = new QLabel(centralwidget);
        Heading_Lite->setObjectName(QString::fromUtf8("Heading_Lite"));
        Heading_Lite->setGeometry(QRect(810, 200, 121, 71));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Agency FB"));
        font2.setPointSize(35);
        font2.setBold(true);
        font2.setWeight(75);
        Heading_Lite->setFont(font2);
        Heading_Lite->setAlignment(Qt::AlignCenter);
        Heading_Twilight = new QLabel(centralwidget);
        Heading_Twilight->setObjectName(QString::fromUtf8("Heading_Twilight"));
        Heading_Twilight->setGeometry(QRect(210, 70, 391, 100));
        Heading_Twilight->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/Photo/Heading_Twilight.png);"));
        Heading_Struggle = new QLabel(centralwidget);
        Heading_Struggle->setObjectName(QString::fromUtf8("Heading_Struggle"));
        Heading_Struggle->setGeometry(QRect(540, 90, 441, 100));
        Heading_Struggle->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/Photo/Heading_Struggle.png);"));
        MenuWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MenuWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 21));
        menuTW_lite = new QMenu(menubar);
        menuTW_lite->setObjectName(QString::fromUtf8("menuTW_lite"));
        MenuWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MenuWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MenuWindow->setStatusBar(statusbar);

        menubar->addAction(menuTW_lite->menuAction());

        retranslateUi(MenuWindow);

        QMetaObject::connectSlotsByName(MenuWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MenuWindow)
    {
        MenuWindow->setWindowTitle(QCoreApplication::translate("MenuWindow", "MainWindow", nullptr));
        NewGame->setText(QCoreApplication::translate("MenuWindow", "New Game", nullptr));
        LoadGame->setText(QCoreApplication::translate("MenuWindow", "AI - USSR", nullptr));
        Exit->setText(QCoreApplication::translate("MenuWindow", "AI - USA", nullptr));
        Heading_Lite->setText(QCoreApplication::translate("MenuWindow", "Lite", nullptr));
        Heading_Twilight->setText(QString());
        Heading_Struggle->setText(QString());
        menuTW_lite->setTitle(QCoreApplication::translate("MenuWindow", "TW lite", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuWindow: public Ui_MenuWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUWINDOW_H
