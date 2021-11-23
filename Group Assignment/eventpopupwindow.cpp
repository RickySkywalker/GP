#include "eventpopupwindow.h"
#include "ui_eventpopupwindow.h"

EventPopUpWindow::EventPopUpWindow(int event_resource_point, std::string description, std::string style_sheet, QWidget *parent) :
    QMainWindow(parent), point(event_resource_point), description(description), ui(new Ui::EventPopUpWindow),
    style_sheet(style_sheet)
{
    ui->setupUi(this);

}

EventPopUpWindow::~EventPopUpWindow()
{
    delete ui;
}

void EventPopUpWindow::on_ok_clicked(){
    this->close();
}
