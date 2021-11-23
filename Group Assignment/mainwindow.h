#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
//#include "World.h"
#include "ui_mainwindow.h"

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

#include "World.h"
#include "Country.h"
#include "Continent.h"
#include "Superpowers.h"
#include "couppopwindow.h"

#include <QMainWindow>
namespace Ui { class MainWindow; }

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    MainWindow( World* const world, QWidget* parent = nullptr);
    ~MainWindow();


private:
    Ui::MainWindow *ui;
    World* const world;

    void change_VP(int VP);
    void change_DEFCON(int DEFCON);
    void change_round(int curr_round);
    void change_turn(int curr_turn);


    void change_DEFCON();
    void change_VP();
    void change_turn();
    void change_round();


    QTimer* loop_timer;
    void main_loop();

    bool coup_mode;


    //Helper functions
    bool on_country_clicked_helper(string countryname, Superpower given, QPushButton *button, bool in_initial_setup = false);
    void change_icon(string country_name, QPushButton * button_USA ,QPushButton * button_USSR );
    void initialize_button_style();
    void initialize_default_influence();


    void change_btn_coup_style();


    void initial_setup_helper(int a, string country_name, Superpower given,
                              QPushButton *button, QPushButton* USA_button, QPushButton* USSR_button);


public slots:

    void on_btn_coup_clicked();
    void on_btn_next_clicked();

    void on_AfghanistanUSA_clicked();
    void on_AfghanistanUSSR_clicked();

    void on_AlgeriaUSA_clicked();
    void on_AlgeriaUSSR_clicked();

    void on_AngolaUSA_clicked();
    void on_AngolaUSSR_clicked();

    void on_ArgentinaUSA_clicked();
    void on_ArgentinaUSSR_clicked();

    void on_AustraliaUSA_clicked();
    void on_AustraliaUSSR_clicked();

    void on_AustriaUSA_clicked();
    void on_AustriaUSSR_clicked();

    void on_BeneluxUSA_clicked();
    void on_BeneluxUSSR_clicked();

    void on_BoliviaUSA_clicked();
    void on_BoliviaUSSR_clicked();

    void on_BotswanaUSA_clicked();
    void on_BotswanaUSSR_clicked();

    void on_BrazilUSA_clicked();
    void on_BrazilUSSR_clicked();

    void on_BulgariaUSA_clicked();
    void on_BulgariaUSSR_clicked();

    void on_BurmaUSA_clicked();
    void on_BurmaUSSR_clicked();

    void on_CameroonUSA_clicked();
    void on_CameroonUSSR_clicked();

    void on_CanadaUSA_clicked();
    void on_CanadaUSSR_clicked();

    void on_ChileUSA_clicked();
    void on_ChileUSSR_clicked();

    void on_ChinaUSA_clicked();
    void on_ChinaUSSR_clicked();

    void on_ColombiaUSA_clicked();
    void on_ColombiaUSSR_clicked();

    void on_CostaRicaUSA_clicked();
    void on_CostaRicaUSSR_clicked();

    void on_CubaUSA_clicked();
    void on_CubaUSSR_clicked();

    void on_CzechoslovakiaUSA_clicked();
    void on_CzechoslovakiaUSSR_clicked();

    void on_DenmarkUSA_clicked();
    void on_DenmarkUSSR_clicked();

    void on_DominicanRepUSA_clicked();
    void on_DominicanRepUSSR_clicked();

    void on_EGermanyUSA_clicked();
    void on_EGermanyUSSR_clicked();

    void on_EcuadorUSA_clicked();
    void on_EcuadorUSSR_clicked();

    void on_EgyptUSA_clicked();
    void on_EgyptUSSR_clicked();

    void on_ElSalvadorUSA_clicked();
    void on_ElSalvadorUSSR_clicked();

    void on_EthiopiaUSA_clicked();
    void on_EthiopiaUSSR_clicked();

    void on_FinlandUSA_clicked();
    void on_FinlandUSSR_clicked();

    void on_FranceUSA_clicked();
    void on_FranceUSSR_clicked();

    void on_GreeceUSA_clicked();
    void on_GreeceUSSR_clicked();

    void on_GuatemalaUSA_clicked();
    void on_GuatemalaUSSR_clicked();

    void on_GulfStatesUSA_clicked();
    void on_GulfStatesUSSR_clicked();

    void on_HaitiUSA_clicked();
    void on_HaitiUSSR_clicked();

    void on_HondurasUSA_clicked();
    void on_HondurasUSSR_clicked();

    void on_HungaryUSA_clicked();
    void on_HungaryUSSR_clicked();

    void on_IndiaUSA_clicked();
    void on_IndiaUSSR_clicked();

    void on_IndonesiaUSA_clicked();
    void on_IndonesiaUSSR_clicked();

    void on_IranUSA_clicked();
    void on_IranUSSR_clicked();

    void on_IraqUSA_clicked();
    void on_IraqUSSR_clicked();

    void on_IsraelUSA_clicked();
    void on_IsraelUSSR_clicked();

    void on_ItalyUSA_clicked();
    void on_ItalyUSSR_clicked();

    void on_IvoryCoastUSA_clicked();
    void on_IvoryCoastUSSR_clicked();

    void on_JapanUSA_clicked();
    void on_JapanUSSR_clicked();

    void on_JordanUSA_clicked();
    void on_JordanUSSR_clicked();

    void on_KenyaUSA_clicked();
    void on_KenyaUSSR_clicked();

    void on_LaosCambodiaUSA_clicked();
    void on_LaosCambodiaUSSR_clicked();

    void on_LebanonUSA_clicked();
    void on_LebanonUSSR_clicked();

    void on_LibyaUSA_clicked();
    void on_LibyaUSSR_clicked();

    void on_MalaysiaUSA_clicked();
    void on_MalaysiaUSSR_clicked();

    void on_MexicoUSA_clicked();
    void on_MexicoUSSR_clicked();

    void on_MoroccoUSA_clicked();
    void on_MoroccoUSSR_clicked();

    void on_NKoreaUSA_clicked();
    void on_NKoreaUSSR_clicked();

    void on_NicaraguaUSA_clicked();
    void on_NicaraguaUSSR_clicked();

    void on_NigeriaUSA_clicked();
    void on_NigeriaUSSR_clicked();

    void on_NorwayUSA_clicked();
    void on_NorwayUSSR_clicked();

    void on_PakistanUSA_clicked();
    void on_PakistanUSSR_clicked();

    void on_PanamaUSA_clicked();
    void on_PanamaUSSR_clicked();

    void on_ParaguayUSA_clicked();
    void on_ParaguayUSSR_clicked();

    void on_PeruUSA_clicked();
    void on_PeruUSSR_clicked();

    void on_PhilippinesUSA_clicked();
    void on_PhilippinesUSSR_clicked();

    void on_PolandUSA_clicked();
    void on_PolandUSSR_clicked();

    void on_RomaniaUSA_clicked();
    void on_RomaniaUSSR_clicked();

    void on_SEAfricanStatesUSA_clicked();
    void on_SEAfricanStatesUSSR_clicked();

    void on_SKoreaUSA_clicked();
    void on_SKoreaUSSR_clicked();

    void on_SaharanStatesUSA_clicked();
    void on_SaharanStatesUSSR_clicked();

    void on_SaudiArabiaUSA_clicked();
    void on_SaudiArabiaUSSR_clicked();

    void on_SomaliaUSA_clicked();
    void on_SomaliaUSSR_clicked();

    void on_SouthAfricaUSA_clicked();
    void on_SouthAfricaUSSR_clicked();

    void on_SpainPortugalUSA_clicked();
    void on_SpainPortugalUSSR_clicked();

    void on_SudanUSA_clicked();
    void on_SudanUSSR_clicked();

    void on_SwedenUSA_clicked();
    void on_SwedenUSSR_clicked();

    void on_SyriaUSA_clicked();
    void on_SyriaUSSR_clicked();

    void on_TaiwanChinaUSA_clicked();
    void on_TaiwanChinaUSSR_clicked();

    void on_ThailandUSA_clicked();
    void on_ThailandUSSR_clicked();

    void on_TunisiaUSA_clicked();
    void on_TunisiaUSSR_clicked();

    void on_TurkeyUSA_clicked();
    void on_TurkeyUSSR_clicked();

    void on_UKUSA_clicked();
    void on_UKUSSR_clicked();

    void on_UruguayUSA_clicked();
    void on_UruguayUSSR_clicked();

    void on_VenezuelaUSA_clicked();
    void on_VenezuelaUSSR_clicked();

    void on_VietnamUSA_clicked();
    void on_VietnamUSSR_clicked();

    void on_WGermanyUSA_clicked();
    void on_WGermanyUSSR_clicked();

    void on_WestAfricanStatesUSA_clicked();
    void on_WestAfricanStatesUSSR_clicked();

    void on_YugoslaviaUSA_clicked();
    void on_YugoslaviaUSSR_clicked();

    void on_ZaireUSA_clicked();
    void on_ZaireUSSR_clicked();

    void on_ZimbabweUSA_clicked();
    void on_ZimbabweUSSR_clicked();


};
#endif // MAINWINDOW_H
