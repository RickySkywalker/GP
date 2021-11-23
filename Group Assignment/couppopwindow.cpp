#include "couppopwindow.h"
#include "ui_couppopwindow.h"

CoupPopWindow::CoupPopWindow(QWidget *parent) :
    QMainWindow (parent),
    ui(new Ui::CoupPopWindow)
{

}

CoupPopWindow::~CoupPopWindow()
{
    delete ui;
}


CoupPopWindow::CoupPopWindow(int min_cost, int max_cost, QWidget* parent):
    QMainWindow(parent), ui(new Ui::CoupPopWindow), min_point_cost(min_cost), max_point_can_use(max_cost)
{
    ui->setupUi(this);
    point_used = max_point_can_use;
    update_number();
    go = false;
}

//this function will initialize the curr_used on screen and set to the point that we currently used
void CoupPopWindow::update_number(){
    ui->curr_used->setText(QString::number(point_used));
    ui->curr_used->setStyleSheet("font: 20pt \"Comic Sans MS\";"
                                       "background-color:white;color:green;");
}

void CoupPopWindow::on_cancel_clicked(){
    //Close the window without doing the coup
    closed = true;
    this->close();
}

void CoupPopWindow::on_go_clicked(){
    closed = true;
    go = true;
    this->close();
}

void CoupPopWindow::on_increase_clicked(){
    if (point_used < max_point_can_use){
        point_used++;
        update_number();
    }
}

void CoupPopWindow::on_decrease_clicked(){
    if (point_used - 1 >= min_point_cost){
        point_used--;
        update_number();
    }
}

bool CoupPopWindow::get_closed() const{
    return closed;
}


//Used in the main window to get the point used for this coup
int CoupPopWindow::get_point_used() const{return point_used;}
//Used in the mainwindow to get the status of thi coup
bool CoupPopWindow::get_status() const {return go;}

