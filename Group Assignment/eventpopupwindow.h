#ifndef EVENTPOPUPWINDOW_H
#define EVENTPOPUPWINDOW_H

#include <QMainWindow>
#include <event.h>
#include "mainwindow.h"

namespace Ui {
class EventPopUpWindow;
}

class EventPopUpWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit EventPopUpWindow(EVENT* given_event, World* const world , QWidget *parent = nullptr);
    ~EventPopUpWindow();

private:
    EVENT* given_event;
    Ui::EventPopUpWindow* ui;

    void set_event_background(EVENT* given_event, World* const world, Ui::EventPopUpWindow* ui);


public slots:
    void on_ok_clicked();

};

#endif // EVENTPOPUPWINDOW_H
