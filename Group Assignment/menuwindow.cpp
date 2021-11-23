#include "menuwindow.h"
#include "ui_menuwindow.h"
#include "mainwindow.h"

MenuWindow::MenuWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MenuWindow)
{
    ui->setupUi(this);
//    ui->Heading1->setStyleSheet("background-color:#01181e; color:#5f1b1a;");
//    ui->Heading2->setStyleSheet("background-color:#a43b37; color:#fcf1ef;");
    ui->Heading_Lite->setStyleSheet("background-color:black; color:white;");
    ui->LoadGame->setStyleSheet("background-color:#fcf1ef;");
    ui->NewGame->setStyleSheet("background-color:#fcf1ef;");
    ui->Exit->setStyleSheet("background-color:#fcf1ef;");
}

MenuWindow::~MenuWindow()
{
    delete ui;
}

void MenuWindow::on_NewGame_clicked(){
    MainWindow* w = new MainWindow{new World(), nullptr};
    w->show();
    this->close();
}

void MenuWindow::on_LoadGame_clicked(){
    //lue
}

void MenuWindow::on_Exit_clicked(){
    exit(-1);
    this->close();
}
