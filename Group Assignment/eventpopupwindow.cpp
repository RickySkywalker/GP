#include "eventpopupwindow.h"
#include "ui_eventpopupwindow.h"
#include "Superpowers.h"

QString standard_StyleSheet = "font: 20pt \"Comic Sans MS\";"
                              "background-color:white;color:black;";
QString USSR_StyleSheet = "font: 20pt \"Comic Sans MS\";"
                          "background-color:white;color:red;";
QString USA_StyleSheet = "font:20pt \"Comic Sans MS\";"
                         "background-color:white;color:blue;";


EventPopUpWindow::EventPopUpWindow(EVENT* given_event,World* const world , QWidget *parent) :
    QMainWindow(parent), ui(new Ui::EventPopUpWindow), given_event(given_event)
{
    ui->setupUi(this);

    //Initialize the event window
//    ui->event_name->setText(QString::fromStdString(given_event->get_name()));
//    ui->event_name->setStyleSheet(standard_StyleSheet);
    ui->color_top->setText(QString::fromStdString(given_event->get_name()));
    setWindowTitle("Event");
//    ui->color_top->setStyleSheet("font: 20pt \"Comic Sans MS\";""color:white;");

    ui->event_describe->setText(QString::fromStdString(given_event->get_description()));
    ui->event_describe->setStyleSheet("font: 20pt \"Comic Sans MS\";"
                                      "background-color:white;color:black;");

    ui->add_point->setText(QString::number(given_event->get_resource_point()));
//    ui->add_point->setStyleSheet("font: 20pt \"Comic Sans MS\";""color:white;");


//    if (given_event->get_belong_to() == USA){
//        ui->add_point->setStyleSheet(USA_StyleSheet);
//    }else if (given_event->get_belong_to() == USSR){
//        ui->add_point->setStyleSheet(USSR_StyleSheet);
//    }else{
//        ui->add_point->setStyleSheet(standard_StyleSheet);
//    }

    set_event_background(nullptr, world, ui);
}

EventPopUpWindow::~EventPopUpWindow()
{
    delete ui;
}

void EventPopUpWindow::on_ok_clicked(){
    this->close();
}

void EventPopUpWindow::set_event_background(EVENT* given_event, World* const world, Ui::EventPopUpWindow* ui){
//    cerr<<"a1"<<endl;
    if (given_event == nullptr){
//        cerr<<"a2"<<endl;
        //get turn
        int turn = world->get_turn();
        //get current superpower
        Superpower superpower = world -> get_curr_player();

        //set top/left/right color
        if (superpower == Superpower::USA){
            ui->color_top->setStyleSheet("background-color:#0080c0;""font: 20pt \"Comic Sans MS\";""color:white;");
            ui->color_left->setStyleSheet("QLabel{background-color:#0080c0;}");
            ui->color_right->setStyleSheet("QLabel{background-color:#0080c0;}");
            ui->color_bottom->setStyleSheet("QLabel{background-color:#0080c0;}");

            ui->add_point->setStyleSheet("background-color:#0080c0;""font: 20pt \"Comic Sans MS\";""color:white;");
        }
        else if (superpower == Superpower::USSR){
//            cerr<<"a3"<<endl;
            ui->color_top->setStyleSheet("background-color:#bf2026;""font: 20pt \"Comic Sans MS\";""color:white;");
            ui->color_left->setStyleSheet("QLabel{background-color:#bf2026;}");
            ui->color_right->setStyleSheet("QLabel{background-color:#bf2026;}");
            ui->color_bottom->setStyleSheet("QLabel{background-color:#bf2026;}");

            ui->add_point->setStyleSheet("background-color:#bf2026;""font: 20pt \"Comic Sans MS\";""color:white;");
        }

        //set event background
        if (turn >= 1 && turn <=3 ){
            if (superpower == Superpower::USA){
                ui->background->setStyleSheet("background-image: url(:/new/prefix1/Photo/USA_early.jpg);");
            }
            else if (superpower == Superpower::USSR){
                ui->background->setStyleSheet("background-image: url(:/new/prefix1/Photo/USSR_early.jpg);");
            }
        }
        else if (turn >= 4 && turn <= 7 ){
            if (superpower == Superpower::USA){
                ui->background->setStyleSheet("background-image: url(:/new/prefix1/Photo/USA_middle.jpg);");
            }
            else if (superpower == Superpower::USSR){
                ui->background->setStyleSheet("background-image: url(:/new/prefix1/Photo/USSR_middle.jpg);");
            }
        }
        else if (turn >= 8 && turn <= 10 ){
            if (superpower == Superpower::USA){
                ui->background->setStyleSheet("background-image: url(:/new/prefix1/Photo/USA_late.jpg);");
            }
            else if (superpower == Superpower::USSR){
                ui->background->setStyleSheet("background-image: url(:/new/prefix1/Photo/USSR_late.jpg);");
            }
        }
    }
    else {
        //...
//        cerr<<"b1"<<endl;
    }

}
