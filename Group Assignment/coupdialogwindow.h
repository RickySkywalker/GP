#ifndef COUPDIALOGWINDOW_H
#define COUPDIALOGWINDOW_H

#include <QDialog>

namespace Ui {
class CoupDialogWindow;
}

class CoupDialogWindow : public QDialog
{
    Q_OBJECT

public:
    explicit CoupDialogWindow(QWidget *parent = nullptr);
    ~CoupDialogWindow();

    explicit CoupDialogWindow(int min_cost, int max_cost, QWidget *parent = nullptr);
    int get_point_used() const;
    bool get_status() const;


private:
    Ui::CoupDialogWindow *ui;
    bool go;
    int point_used;
    int min_point_cost;
    int max_point_can_use;

    //Helper functions
    void update_number();



public slots:
    void on_increase_clicked();
    void on_decrease_clicked();
    //void on_buttonbox_clicked();
};

#endif // COUPDIALOGWINDOW_H
