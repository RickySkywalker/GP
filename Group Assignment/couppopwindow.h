#ifndef COUPPOPWINDOW_H
#define COUPPOPWINDOW_H

#include <QMainWindow>
#include <QDialog>


/**
In this class we will handle the point use choose for the coup only point use is considered!!!
*/

namespace Ui {
class CoupPopWindow;
}

class CoupPopWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CoupPopWindow(QWidget *parent = nullptr);
    ~CoupPopWindow();

    explicit CoupPopWindow(int min_cost, int max_cost, QWidget *parent = nullptr);

    int get_point_used() const;
    bool get_status() const;
    bool get_closed() const;
    bool closed;


private:
    bool go;
    int point_used;
    int min_point_cost;
    int max_point_can_use;



    void update_number();
    Ui::CoupPopWindow *ui;

public slots:
    void on_go_clicked();
    void on_cancel_clicked();
    void on_increase_clicked();
    void on_decrease_clicked();
};

#endif // COUPPOPWINDOW_H
