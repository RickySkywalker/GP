#include "menuwindow.h"
#include "ui_menuwindow.h"
#include "mainwindow.h"
#include "mainwindowai.h"

#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QSound>
#include <Qt>


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




    playlist = new QMediaPlaylist();
    //background-image: url(:/new/prefix1/Photo/background.png);

    QUrl aaa = QUrl("qrc:/Music/Music/menu theme.wav");
    playlist->addMedia(aaa);

    music = new QMediaPlayer();
    music->setPlaylist(playlist);
    music->play();

    //QSound::play(":/new/prefix1/Music/menu theme.wav");

}

MenuWindow::~MenuWindow()
{
    delete ui;
}

void MenuWindow::on_NewGame_clicked(){
    MainWindow* w = new MainWindow{new World(), nullptr};
    //w->setAttribute(Qt::AA_Use96Dpi);
    w->show();
    this->close();
    delete music;
    delete playlist;
}

void MenuWindow::on_LoadGame_clicked(){
    //lue
    MainWindow* w = new MainWindowAI{new World(), USSR, nullptr};
    w->show();
    this->close();
    delete music;
    delete playlist;
}

void MenuWindow::on_Exit_clicked(){
    MainWindow* w = new MainWindowAI{new World(), USA, nullptr};
    w->show();
    this->close();
    delete music;
    delete playlist;
}
