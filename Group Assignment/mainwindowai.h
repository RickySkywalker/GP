#ifndef MAINWINDOWAI_H
#define MAINWINDOWAI_H

#include "World.h"
#include "Country.h"
#include "Continent.h"
#include "Superpowers.h"
#include "mainwindow.h"


class MainWindowAI : public MainWindow
{
public:
    MainWindowAI(World* const world, Superpower AIplayer, QWidget* parent = nullptr);

private:
    Superpower AIplayer;

    void main_AI();

    void decision_tree(Continent::Contient_type curr_type);
    int get_remainning_resource_point();


public slots:
    void on_btn_next_clicked();

};

#endif // MAINWINDOWAI_H
