#ifndef MENUWINDOW_H
#define MENUWINDOW_H

#include <QMainWindow>

#include <QMediaPlayer>
#include <QMediaPlaylist>


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
    void on_btn_load_clicked();

private:
    Ui::MenuWindow *ui;
    QMediaPlaylist* playlist;
    QMediaPlayer *music;


};

#endif // MENUWINDOW_H
