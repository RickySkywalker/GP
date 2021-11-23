#ifndef MENUWINDOW_H
#define MENUWINDOW_H

#include <QMainWindow>

namespace Ui {
class MenuWindow;
}

class MenuWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MenuWindow(QWidget *parent = nullptr);
    ~MenuWindow();

public slots:
    void on_NewGame_clicked();
    void on_LoadGame_clicked();
    void on_Exit_clicked();

private:
    Ui::MenuWindow *ui;

};

#endif // MENUWINDOW_H
