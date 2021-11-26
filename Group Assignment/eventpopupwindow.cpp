#include "eventpopupwindow.h"
#include "ui_eventpopupwindow.h"
#include "Superpowers.h"

QString standard_StyleSheet = "font: 20pt \"Comic Sans MS\";"
                              "background-color:white;color:black;";
QString USSR_StyleSheet = "font: 20pt \"Comic Sans MS\";"
                          "background-color:white;color:red;";
QString USA_StyleSheet = "font:20pt \"Comic Sans MS\";"
                         "background-color:white;color:blue;";


EventPopUpWindow::EventPopUpWindow(EVENT* given_event, QWidget *parent) :
    QMainWindow(parent), ui(new Ui::EventPopUpWindow), given_event(given_event)
{
    ui->setupUi(this);

    //Initialize the event window
    ui->event_name->setText(QString::fromStdString(given_event->get_name()));
    ui->event_name->setStyleSheet(standard_StyleSheet);

    ui->event_describe->setText(QString::fromStdString(given_event->get_description()));
    ui->event_describe->setStyleSheet("font: 20pt \"Comic Sans MS\";"
                                      "background-color:white;color:black;");

    ui->add_point->setText(QString::number(given_event->get_resource_point()));

    if (given_event->get_belong_to() == USA){
        ui->add_point->setStyleSheet(USA_StyleSheet);
    }else if (given_event->get_belong_to() == USSR){
        ui->add_point->setStyleSheet(USSR_StyleSheet);
    }else{
        ui->add_point->setStyleSheet(standard_StyleSheet);
    }


}

EventPopUpWindow::~EventPopUpWindow()
{
    delete ui;
}

void EventPopUpWindow::on_ok_clicked(){
    this->close();
}
