#ifndef EVENTPOPUPWINDOW_H
#define EVENTPOPUPWINDOW_H

#include <QMainWindow>

namespace Ui {
class EventPopUpWindow;
}

class EventPopUpWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit EventPopUpWindow(int event_resource_point, std::string description, std::string style_sheet, QWidget *parent = nullptr);
    ~EventPopUpWindow();

private:
    std::string style_sheet;
    std::string description;
    int point;
    Ui::EventPopUpWindow *ui;

public slots:
    void on_ok_clicked();

};

#endif // EVENTPOPUPWINDOW_H
