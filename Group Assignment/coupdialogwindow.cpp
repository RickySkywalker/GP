#include "coupdialogwindow.h"
#include "ui_coupdialogwindow.h"

CoupDialogWindow::CoupDialogWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CoupDialogWindow)
{
    ui->setupUi(this);
}

CoupDialogWindow::~CoupDialogWindow()
{
    delete ui;
}

CoupDialogWindow::CoupDialogWindow(int min_cost, int max_cost, QWidget* parent):
    QDialog(parent),
    ui(new Ui::CoupDialogWindow),
    min_point_cost(min_cost),
    max_point_can_use(max_cost)
{
    ui->setupUi(this);
    point_used = min_cost;
    update_number();
    go = false;
}

//this function will initialize the curr_used on screen and set to the point that we currently used
void CoupDialogWindow::update_number(){
    ui->curr_used->setText(QString::number(point_used));
    ui->curr_used->setStyleSheet("font: 40pt \"Comic Sans MS\";"
                                       "background-color:white;color:red;");

}

void CoupDialogWindow::on_increase_clicked(){
    if (point_used < max_point_can_use){
        point_used++;
        update_number();
    }
}

void CoupDialogWindow::on_decrease_clicked(){
    if (point_used - 1 >= min_point_cost){
        point_used--;
        update_number();
    }
}

int CoupDialogWindow::get_point_used() const{
    return point_used;
}


