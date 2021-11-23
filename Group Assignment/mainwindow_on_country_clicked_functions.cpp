#include "mainwindow.h"
//#include "ui_mainwindow.h"

#include <QString>
#include <QTimer>
#include <QFileDialog>
#include <QMainWindow>
using namespace std;



void MainWindow::on_AfghanistanUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Afghanistan", USA, ui->AfghanistanUSA);
    if (icon_change){
        change_icon("Afghanistan",ui->AfghanistanUSA, ui->AfghanistanUSSR);
    }
}
void MainWindow::on_AfghanistanUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Afghanistan", USSR , ui->AfghanistanUSSR );
    if (icon_change){
        change_icon("Afghanistan",ui->AfghanistanUSA, ui->AfghanistanUSSR);
    }
}

void MainWindow::on_AlgeriaUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Algeria", USA , ui->AlgeriaUSA );
    if (icon_change){
        change_icon("Algeria",ui->AlgeriaUSA, ui->AlgeriaUSSR);
    }
}
void MainWindow::on_AlgeriaUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Algeria", USSR , ui->AlgeriaUSSR );
    if (icon_change){
        change_icon("Algeria",ui->AlgeriaUSA, ui->AlgeriaUSSR);
    }
}

void MainWindow::on_AngolaUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Angola", USA , ui->AngolaUSA );
    if (icon_change){
        change_icon("Angola",ui->AngolaUSA, ui->AngolaUSSR);
    }
}
void MainWindow::on_AngolaUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Angola", USSR , ui->AngolaUSSR );
    if (icon_change){
        change_icon("Angola",ui->AngolaUSA, ui->AngolaUSSR);
    }
}

void MainWindow::on_ArgentinaUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Argentina", USA , ui->ArgentinaUSA );
    if (icon_change){
        change_icon("Argentina",ui->ArgentinaUSA, ui->ArgentinaUSSR);
    }
}
void MainWindow::on_ArgentinaUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Argentina", USSR , ui->ArgentinaUSSR );
    if (icon_change){
        change_icon("Argentina",ui->ArgentinaUSA, ui->ArgentinaUSSR);
    }
}

void MainWindow::on_AustraliaUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Australia", USA , ui->AustraliaUSA );
    if (icon_change){
        change_icon("Australia",ui->AustraliaUSA, ui->AustraliaUSSR);
    }
}
void MainWindow::on_AustraliaUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Australia", USSR , ui->AustraliaUSSR );
    if (icon_change){
        change_icon("Australia",ui->AustraliaUSA, ui->AustraliaUSSR);
    }
}

void MainWindow::on_AustriaUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Austria", USA , ui->AustriaUSA );
    if (icon_change){
        change_icon("Austria",ui->AustriaUSA, ui->AustriaUSSR);
    }
}
void MainWindow::on_AustriaUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Austria", USSR , ui->AustriaUSSR );
    if (icon_change){
        change_icon("Austria",ui->AustriaUSA, ui->AustriaUSSR);
    }
}

void MainWindow::on_BeneluxUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Benelux", USA , ui->BeneluxUSA );
    if (icon_change){
        change_icon("Benelux",ui->BeneluxUSA, ui->BeneluxUSSR);
    }
}
void MainWindow::on_BeneluxUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Benelux", USSR , ui->BeneluxUSSR );
    if (icon_change){
        change_icon("Benelux",ui->BeneluxUSA, ui->BeneluxUSSR);
    }
}

void MainWindow::on_BoliviaUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Bolivia", USA , ui->BoliviaUSA );
    if (icon_change){
        change_icon("Bolivia",ui->BoliviaUSA, ui->BoliviaUSSR);
    }
}
void MainWindow::on_BoliviaUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Bolivia", USSR , ui->BoliviaUSSR );
    if (icon_change){
        change_icon("Bolivia",ui->BoliviaUSA, ui->BoliviaUSSR);
    }
}

void MainWindow::on_BotswanaUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Botswana", USA , ui->BotswanaUSA );
    if (icon_change){
        change_icon("Botswana",ui->BotswanaUSA, ui->BotswanaUSSR);
    }
}
void MainWindow::on_BotswanaUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Botswana", USSR , ui->BotswanaUSSR );
    if (icon_change){
        change_icon("Botswana",ui->BotswanaUSA, ui->BotswanaUSSR);
    }
}

void MainWindow::on_BrazilUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Brazil", USA , ui->BrazilUSA );
    if (icon_change){
        change_icon("Brazil",ui->BrazilUSA, ui->BrazilUSSR);
    }
}
void MainWindow::on_BrazilUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Brazil", USSR , ui->BrazilUSSR );
    if (icon_change){
        change_icon("Brazil",ui->BrazilUSA, ui->BrazilUSSR);
    }
}

void MainWindow::on_BulgariaUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Bulgaria", USA , ui->BulgariaUSA );
    if (icon_change){
        change_icon("Bulgaria",ui->BulgariaUSA, ui->BulgariaUSSR);
    }
}
void MainWindow::on_BulgariaUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Bulgaria", USSR , ui->BulgariaUSSR );
    if (icon_change){
        change_icon("Bulgaria",ui->BulgariaUSA, ui->BulgariaUSSR);
    }
}

void MainWindow::on_BurmaUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Burma", USA , ui->BurmaUSA );
    if (icon_change){
        change_icon("Burma",ui->BurmaUSA, ui->BurmaUSSR);
    }
}
void MainWindow::on_BurmaUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Burma", USSR , ui->BurmaUSSR );
    if (icon_change){
        change_icon("Burma",ui->BurmaUSA, ui->BurmaUSSR);
    }
}

void MainWindow::on_CameroonUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Cameroon", USA , ui->CameroonUSA );
    if (icon_change){
        change_icon("Cameroon",ui->CameroonUSA, ui->CameroonUSSR);
    }
}
void MainWindow::on_CameroonUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Cameroon", USSR , ui->CameroonUSSR );
    if (icon_change){
        change_icon("Cameroon",ui->CameroonUSA, ui->CameroonUSSR);
    }
}

void MainWindow::on_CanadaUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Canada", USA , ui->CanadaUSA );
    if (icon_change){
        change_icon("Canada",ui->CanadaUSA, ui->CanadaUSSR);
    }
}
void MainWindow::on_CanadaUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Canada", USSR , ui->CanadaUSSR );
    if (icon_change){
        change_icon("Canada",ui->CanadaUSA, ui->CanadaUSSR);
    }
}

void MainWindow::on_ChileUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Chile", USA , ui->ChileUSA );
    if (icon_change){
        change_icon("Chile",ui->ChileUSA, ui->ChileUSSR);
    }
}
void MainWindow::on_ChileUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Chile", USSR , ui->ChileUSSR );
    if (icon_change){
        change_icon("Chile",ui->ChileUSA, ui->ChileUSSR);
    }
}

void MainWindow::on_ChinaUSA_clicked(){
    bool icon_change = on_country_clicked_helper("China", USA , ui->ChinaUSA );
    if (icon_change){
        change_icon("China",ui->ChinaUSA, ui->ChinaUSSR);
    }
}
void MainWindow::on_ChinaUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("China", USSR , ui->ChinaUSSR );
    if (icon_change){
        change_icon("China",ui->ChinaUSA, ui->ChinaUSSR);
    }
}

void MainWindow::on_ColombiaUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Colombia", USA , ui->ColombiaUSA );
    if (icon_change){
        change_icon("Colombia",ui->ColombiaUSA, ui->ColombiaUSSR);
    }
}
void MainWindow::on_ColombiaUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Colombia", USSR , ui->ColombiaUSSR );
    if (icon_change){
        change_icon("Colombia",ui->ColombiaUSA, ui->ColombiaUSSR);
    }
}

void MainWindow::on_CostaRicaUSA_clicked(){
    bool icon_change = on_country_clicked_helper("CostaRica", USA , ui->CostaRicaUSA );
    if (icon_change){
        change_icon("CostaRica",ui->CostaRicaUSA, ui->CostaRicaUSSR);
    }
}
void MainWindow::on_CostaRicaUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("CostaRica", USSR , ui->CostaRicaUSSR );
    if (icon_change){
        change_icon("CostaRica",ui->CostaRicaUSA, ui->CostaRicaUSSR);
    }
}

void MainWindow::on_CubaUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Cuba", USA , ui->CubaUSA );
    if (icon_change){
        change_icon("Cuba",ui->CubaUSA, ui->CubaUSSR);
    }
}
void MainWindow::on_CubaUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Cuba", USSR , ui->CubaUSSR );
    if (icon_change){
       change_icon("Cuba",ui->CubaUSA, ui->CubaUSSR);
    }
}

void MainWindow::on_CzechoslovakiaUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Czechoslovakia", USA , ui->CzechoslovakiaUSA );
    if (icon_change){
        change_icon("Czechoslovakia",ui->CzechoslovakiaUSA, ui->CzechoslovakiaUSSR);
    }
}
void MainWindow::on_CzechoslovakiaUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Czechoslovakia", USSR , ui->CzechoslovakiaUSSR );
    if (icon_change){
       change_icon("Czechoslovakia",ui->CzechoslovakiaUSA, ui->CzechoslovakiaUSSR);
    }
}

void MainWindow::on_DenmarkUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Denmark", USA , ui->DenmarkUSA );
    if (icon_change){
        change_icon("Denmark",ui->DenmarkUSA, ui->DenmarkUSSR);
    }
}
void MainWindow::on_DenmarkUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Denmark", USSR , ui->DenmarkUSSR );
    if (icon_change){
       change_icon("Denmark",ui->DenmarkUSA, ui->DenmarkUSSR);
    }
}

void MainWindow::on_DominicanRepUSA_clicked(){
    bool icon_change = on_country_clicked_helper("DominicanRep", USA , ui->DominicanRepUSA );
    if (icon_change){
        change_icon("DominicanRep",ui->DominicanRepUSA, ui->DominicanRepUSSR);
    }
}
void MainWindow::on_DominicanRepUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("DominicanRep", USSR , ui->DominicanRepUSSR );
    if (icon_change){
       change_icon("DominicanRep",ui->DominicanRepUSA, ui->DominicanRepUSSR);
    }
}

void MainWindow::on_EGermanyUSA_clicked(){
    bool icon_change = on_country_clicked_helper("EGermany", USA , ui->EGermanyUSA );
    if (icon_change){
        change_icon("EGermany",ui->EGermanyUSA, ui->EGermanyUSSR);
    }
}
void MainWindow::on_EGermanyUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("EGermany", USSR , ui->EGermanyUSSR );
    if (icon_change){
       change_icon("EGermany",ui->EGermanyUSA, ui->EGermanyUSSR);
    }
}

void MainWindow::on_EcuadorUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Ecuador", USA , ui->EcuadorUSA );
    if (icon_change){
        change_icon("Ecuador",ui->EcuadorUSA, ui->EcuadorUSSR);
    }
}
void MainWindow::on_EcuadorUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Ecuador", USSR , ui->EcuadorUSSR );
    if (icon_change){
       change_icon("Ecuador",ui->EcuadorUSA, ui->EcuadorUSSR);
    }
}

void MainWindow::on_EgyptUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Egypt", USA , ui->EgyptUSA );
    if (icon_change){
        change_icon("Egypt",ui->EgyptUSA, ui->EgyptUSSR);
    }
}
void MainWindow::on_EgyptUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Egypt", USSR , ui->EgyptUSSR );
    if (icon_change){
       change_icon("Egypt",ui->EgyptUSA, ui->EgyptUSSR);
    }
}

void MainWindow::on_ElSalvadorUSA_clicked(){
    bool icon_change = on_country_clicked_helper("ElSalvador", USA , ui->ElSalvadorUSA );
    if (icon_change){
        change_icon("ElSalvador",ui->ElSalvadorUSA, ui->ElSalvadorUSSR);
    }
}
void MainWindow::on_ElSalvadorUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("ElSalvador", USSR , ui->ElSalvadorUSSR );
    if (icon_change){
       change_icon("ElSalvador",ui->ElSalvadorUSA, ui->ElSalvadorUSSR);
    }
}

void MainWindow::on_EthiopiaUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Ethiopia", USA , ui->EthiopiaUSA );
    if (icon_change){
        change_icon("Ethiopia",ui->EthiopiaUSA, ui->EthiopiaUSSR);
    }
}
void MainWindow::on_EthiopiaUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Ethiopia", USSR , ui->EthiopiaUSSR );
    if (icon_change){
       change_icon("Ethiopia",ui->EthiopiaUSA, ui->EthiopiaUSSR);
    }
}

void MainWindow::on_FinlandUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Finland", USA , ui->FinlandUSA );
    if (icon_change){
        change_icon("Finland",ui->FinlandUSA, ui->FinlandUSSR);
    }
}
void MainWindow::on_FinlandUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Finland", USSR , ui->FinlandUSSR );
    if (icon_change){
       change_icon("Finland",ui->FinlandUSA, ui->FinlandUSSR);
    }
}

void MainWindow::on_FranceUSA_clicked(){
    bool icon_change = on_country_clicked_helper("France", USA , ui->FranceUSA );
    if (icon_change){
        change_icon("France",ui->FranceUSA, ui->FranceUSSR);
    }
}
void MainWindow::on_FranceUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("France", USSR , ui->FranceUSSR );
    if (icon_change){
       change_icon("France",ui->FranceUSA, ui->FranceUSSR);
    }
}

void MainWindow::on_GreeceUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Greece", USA , ui->GreeceUSA );
    if (icon_change){
        change_icon("Greece",ui->GreeceUSA, ui->GreeceUSSR);
    }
}
void MainWindow::on_GreeceUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Greece", USSR , ui->GreeceUSSR );
    if (icon_change){
       change_icon("Greece",ui->GreeceUSA, ui->GreeceUSSR);
    }
}

void MainWindow::on_GuatemalaUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Guatemala", USA , ui->GuatemalaUSA );
    if (icon_change){
        change_icon("Guatemala",ui->GuatemalaUSA, ui->GuatemalaUSSR);
    }
}
void MainWindow::on_GuatemalaUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Guatemala", USSR , ui->GuatemalaUSSR );
    if (icon_change){
       change_icon("Guatemala",ui->GuatemalaUSA, ui->GuatemalaUSSR);
    }
}

void MainWindow::on_GulfStatesUSA_clicked(){
    bool icon_change = on_country_clicked_helper("GulfStates", USA , ui->GulfStatesUSA );
    if (icon_change){
        change_icon("GulfStates",ui->GulfStatesUSA, ui->GulfStatesUSSR);
    }
}
void MainWindow::on_GulfStatesUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("GulfStates", USSR , ui->GulfStatesUSSR );
    if (icon_change){
       change_icon("GulfStates",ui->GulfStatesUSA, ui->GulfStatesUSSR);
    }
}

void MainWindow::on_HaitiUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Haiti", USA , ui->HaitiUSA );
    if (icon_change){
        change_icon("Haiti",ui->HaitiUSA, ui->HaitiUSSR);
    }
}
void MainWindow::on_HaitiUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Haiti", USSR , ui->HaitiUSSR );
    if (icon_change){
       change_icon("Haiti",ui->HaitiUSA, ui->HaitiUSSR);
    }
}

void MainWindow::on_HondurasUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Honduras", USA , ui->HondurasUSA );
    if (icon_change){
        change_icon("Honduras",ui->HondurasUSA, ui->HondurasUSSR);
    }
}
void MainWindow::on_HondurasUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Honduras", USSR , ui->HondurasUSSR );
    if (icon_change){
       change_icon("Honduras",ui->HondurasUSA, ui->HondurasUSSR);
    }
}

void MainWindow::on_HungaryUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Hungary", USA , ui->HungaryUSA );
    if (icon_change){
        change_icon("Hungary",ui->HungaryUSA, ui->HungaryUSSR);
    }
}
void MainWindow::on_HungaryUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Hungary", USSR , ui->HungaryUSSR );
    if (icon_change){
       change_icon("Hungary",ui->HungaryUSA, ui->HungaryUSSR);
    }
}

void MainWindow::on_IndiaUSA_clicked(){
    bool icon_change = on_country_clicked_helper("India", USA , ui->IndiaUSA );
    if (icon_change){
        change_icon("India",ui->IndiaUSA, ui->IndiaUSSR);
    }
}
void MainWindow::on_IndiaUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("India", USSR , ui->IndiaUSSR );
    if (icon_change){
       change_icon("India",ui->IndiaUSA, ui->IndiaUSSR);
    }
}

void MainWindow::on_IndonesiaUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Indonesia", USA , ui->IndonesiaUSA );
    if (icon_change){
        change_icon("Indonesia",ui->IndonesiaUSA, ui->IndonesiaUSSR);
    }
}
void MainWindow::on_IndonesiaUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Indonesia", USSR , ui->IndonesiaUSSR );
    if (icon_change){
       change_icon("Indonesia",ui->IndonesiaUSA, ui->IndonesiaUSSR);
    }
}

void MainWindow::on_IranUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Iran", USA , ui->IranUSA );
    if (icon_change){
        change_icon("Iran",ui->IranUSA, ui->IranUSSR);
    }
}
void MainWindow::on_IranUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Iran", USSR , ui->IranUSSR );
    if (icon_change){
       change_icon("Iran",ui->IranUSA, ui->IranUSSR);
    }
}

void MainWindow::on_IraqUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Iraq", USA , ui->IraqUSA );
    if (icon_change){
        change_icon("Iraq",ui->IraqUSA, ui->IraqUSSR);
    }
}
void MainWindow::on_IraqUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Iraq", USSR , ui->IraqUSSR );
    if (icon_change){
       change_icon("Iraq",ui->IraqUSA, ui->IraqUSSR);
    }
}

void MainWindow::on_IsraelUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Israel", USA , ui->IsraelUSA );
    if (icon_change){
        change_icon("Israel",ui->IsraelUSA, ui->IsraelUSSR);
    }
}
void MainWindow::on_IsraelUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Israel", USSR , ui->IsraelUSSR );
    if (icon_change){
       change_icon("Israel",ui->IsraelUSA, ui->IsraelUSSR);
    }
}

void MainWindow::on_ItalyUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Italy", USA , ui->ItalyUSA );
    if (icon_change){
        change_icon("Italy",ui->ItalyUSA, ui->ItalyUSSR);
    }
}
void MainWindow::on_ItalyUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Italy", USSR , ui->ItalyUSSR );
    if (icon_change){
       change_icon("Italy",ui->ItalyUSA, ui->ItalyUSSR);
    }
}

void MainWindow::on_IvoryCoastUSA_clicked(){
    bool icon_change = on_country_clicked_helper("IvoryCoast", USA , ui->IvoryCoastUSA );
    if (icon_change){
        change_icon("IvoryCoast",ui->IvoryCoastUSA, ui->IvoryCoastUSSR);
    }
}
void MainWindow::on_IvoryCoastUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("IvoryCoast", USSR , ui->IvoryCoastUSSR );
    if (icon_change){
       change_icon("IvoryCoast",ui->IvoryCoastUSA, ui->IvoryCoastUSSR);
    }
}

void MainWindow::on_JapanUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Japan", USA , ui->JapanUSA );
    if (icon_change){
        change_icon("Japan",ui->JapanUSA, ui->JapanUSSR);
    }
}
void MainWindow::on_JapanUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Japan", USSR , ui->JapanUSSR );
    if (icon_change){
       change_icon("Japan",ui->JapanUSA, ui->JapanUSSR);
    }
}

void MainWindow::on_JordanUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Jordan", USA , ui->JordanUSA );
    if (icon_change){
        change_icon("Jordan",ui->JordanUSA, ui->JordanUSSR);
    }
}
void MainWindow::on_JordanUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Jordan", USSR , ui->JordanUSSR );
    if (icon_change){
       change_icon("Jordan",ui->JordanUSA, ui->JordanUSSR);
    }
}

void MainWindow::on_KenyaUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Kenya", USA , ui->KenyaUSA );
    if (icon_change){
        change_icon("Kenya",ui->KenyaUSA, ui->KenyaUSSR);
    }
}
void MainWindow::on_KenyaUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Kenya", USSR , ui->KenyaUSSR );
    if (icon_change){
       change_icon("Kenya",ui->KenyaUSA, ui->KenyaUSSR);
    }
}

void MainWindow::on_LaosCambodiaUSA_clicked(){
    bool icon_change = on_country_clicked_helper("LaosCambodia", USA , ui->LaosCambodiaUSA );
    if (icon_change){
        change_icon("LaosCambodia",ui->LaosCambodiaUSA, ui->LaosCambodiaUSSR);
    }
}
void MainWindow::on_LaosCambodiaUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("LaosCambodia", USSR , ui->LaosCambodiaUSSR );
    if (icon_change){
       change_icon("LaosCambodia",ui->LaosCambodiaUSA, ui->LaosCambodiaUSSR);
    }
}

void MainWindow::on_LebanonUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Lebanon", USA , ui->LebanonUSA );
    if (icon_change){
        change_icon("Lebanon",ui->LebanonUSA, ui->LebanonUSSR);
    }
}
void MainWindow::on_LebanonUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Lebanon", USSR , ui->LebanonUSSR );
    if (icon_change){
       change_icon("Lebanon",ui->LebanonUSA, ui->LebanonUSSR);
    }
}

void MainWindow::on_LibyaUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Libya", USA , ui->LibyaUSA );
    if (icon_change){
        change_icon("Libya",ui->LibyaUSA, ui->LibyaUSSR);
    }
}
void MainWindow::on_LibyaUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Libya", USSR , ui->LibyaUSSR );
    if (icon_change){
       change_icon("Libya",ui->LibyaUSA, ui->LibyaUSSR);
    }
}

void MainWindow::on_MalaysiaUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Malaysia", USA , ui->MalaysiaUSA );
    if (icon_change){
        change_icon("Malaysia",ui->MalaysiaUSA, ui->MalaysiaUSSR);
    }
}
void MainWindow::on_MalaysiaUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Malaysia", USSR , ui->MalaysiaUSSR );
    if (icon_change){
       change_icon("Malaysia",ui->MalaysiaUSA, ui->MalaysiaUSSR);
    }
}

void MainWindow::on_MexicoUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Mexico", USA , ui->MexicoUSA );
    if (icon_change){
        change_icon("Mexico",ui->MexicoUSA, ui->MexicoUSSR);
    }
}
void MainWindow::on_MexicoUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Mexico", USSR , ui->MexicoUSSR );
    if (icon_change){
       change_icon("Mexico",ui->MexicoUSA, ui->MexicoUSSR);
    }
}

void MainWindow::on_MoroccoUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Morocco", USA , ui->MoroccoUSA );
    if (icon_change){
        change_icon("Morocco",ui->MoroccoUSA, ui->MoroccoUSSR);
    }
}
void MainWindow::on_MoroccoUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Morocco", USSR , ui->MoroccoUSSR );
    if (icon_change){
       change_icon("Morocco",ui->MoroccoUSA, ui->MoroccoUSSR);
    }
}

void MainWindow::on_NKoreaUSA_clicked(){
    bool icon_change = on_country_clicked_helper("NKorea", USA , ui->NKoreaUSA );
    if (icon_change){
        change_icon("NKorea",ui->NKoreaUSA, ui->NKoreaUSSR);
    }
}
void MainWindow::on_NKoreaUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("NKorea", USSR , ui->NKoreaUSSR );
    if (icon_change){
       change_icon("NKorea",ui->NKoreaUSA, ui->NKoreaUSSR);
    }
}

void MainWindow::on_NicaraguaUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Nicaragua", USA , ui->NicaraguaUSA );
    if (icon_change){
        change_icon("Nicaragua",ui->NicaraguaUSA, ui->NicaraguaUSSR);
    }
}
void MainWindow::on_NicaraguaUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Nicaragua", USSR , ui->NicaraguaUSSR );
    if (icon_change){
       change_icon("Nicaragua",ui->NicaraguaUSA, ui->NicaraguaUSSR);
    }
}

void MainWindow::on_NigeriaUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Nigeria", USA , ui->NigeriaUSA );
    if (icon_change){
        change_icon("Nigeria",ui->NigeriaUSA, ui->NigeriaUSSR);
    }
}
void MainWindow::on_NigeriaUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Nigeria", USSR , ui->NigeriaUSSR );
    if (icon_change){
       change_icon("Nigeria",ui->NigeriaUSA, ui->NigeriaUSSR);
    }
}

void MainWindow::on_NorwayUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Norway", USA , ui->NorwayUSA );
    if (icon_change){
        change_icon("Norway",ui->NorwayUSA, ui->NorwayUSSR);
    }
}
void MainWindow::on_NorwayUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Norway", USSR , ui->NorwayUSSR );
    if (icon_change){
       change_icon("Norway",ui->NorwayUSA, ui->NorwayUSSR);
    }
}

void MainWindow::on_PakistanUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Pakistan", USA , ui->PakistanUSA );
    if (icon_change){
        change_icon("Pakistan",ui->PakistanUSA, ui->PakistanUSSR);
    }
}
void MainWindow::on_PakistanUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Pakistan", USSR , ui->PakistanUSSR );
    if (icon_change){
       change_icon("Pakistan",ui->PakistanUSA, ui->PakistanUSSR);
    }
}

void MainWindow::on_PanamaUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Panama", USA , ui->PanamaUSA );
    if (icon_change){
        change_icon("Panama",ui->PanamaUSA, ui->PanamaUSSR);
    }
}
void MainWindow::on_PanamaUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Panama", USSR , ui->PanamaUSSR );
    if (icon_change){
       change_icon("Panama",ui->PanamaUSA, ui->PanamaUSSR);
    }
}

void MainWindow::on_ParaguayUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Paraguay", USA , ui->ParaguayUSA );
    if (icon_change){
        change_icon("Paraguay",ui->ParaguayUSA, ui->ParaguayUSSR);
    }
}
void MainWindow::on_ParaguayUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Paraguay", USSR , ui->ParaguayUSSR );
    if (icon_change){
       change_icon("Paraguay",ui->ParaguayUSA, ui->ParaguayUSSR);
    }
}

void MainWindow::on_PeruUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Peru", USA , ui->PeruUSA );
    if (icon_change){
        change_icon("Peru",ui->PeruUSA, ui->PeruUSSR);
    }
}
void MainWindow::on_PeruUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Peru", USSR , ui->PeruUSSR );
    if (icon_change){
       change_icon("Peru",ui->PeruUSA, ui->PeruUSSR);
    }
}

void MainWindow::on_PhilippinesUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Philippines", USA , ui->PhilippinesUSA );
    if (icon_change){
        change_icon("Philippines",ui->PhilippinesUSA, ui->PhilippinesUSSR);
    }
}
void MainWindow::on_PhilippinesUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Philippines", USSR , ui->PhilippinesUSSR );
    if (icon_change){
       change_icon("Philippines",ui->PhilippinesUSA, ui->PhilippinesUSSR);
    }
}

void MainWindow::on_PolandUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Poland", USA , ui->PolandUSA );
    if (icon_change){
        change_icon("Poland",ui->PolandUSA, ui->PolandUSSR);
    }
}
void MainWindow::on_PolandUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Poland", USSR , ui->PolandUSSR );
    if (icon_change){
       change_icon("Poland",ui->PolandUSA, ui->PolandUSSR);
    }
}

void MainWindow::on_RomaniaUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Romania", USA , ui->RomaniaUSA );
    if (icon_change){
        change_icon("Romania",ui->RomaniaUSA, ui->RomaniaUSSR);
    }
}
void MainWindow::on_RomaniaUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Romania", USSR , ui->RomaniaUSSR );
    if (icon_change){
       change_icon("Romania",ui->RomaniaUSA, ui->RomaniaUSSR);
    }
}

void MainWindow::on_SEAfricanStatesUSA_clicked(){
    bool icon_change = on_country_clicked_helper("SEAfricanStates", USA , ui->SEAfricanStatesUSA );
    if (icon_change){
        change_icon("SEAfricanStates",ui->SEAfricanStatesUSA, ui->SEAfricanStatesUSSR);
    }
}
void MainWindow::on_SEAfricanStatesUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("SEAfricanStates", USSR , ui->SEAfricanStatesUSSR );
    if (icon_change){
       change_icon("SEAfricanStates",ui->SEAfricanStatesUSA, ui->SEAfricanStatesUSSR);
    }
}

void MainWindow::on_SKoreaUSA_clicked(){
    bool icon_change = on_country_clicked_helper("SKorea", USA , ui->SKoreaUSA );
    if (icon_change){
        change_icon("SKorea",ui->SKoreaUSA, ui->SKoreaUSSR);
    }
}
void MainWindow::on_SKoreaUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("SKorea", USSR , ui->SKoreaUSSR );
    if (icon_change){
       change_icon("SKorea",ui->SKoreaUSA, ui->SKoreaUSSR);
    }
}

void MainWindow::on_SaharanStatesUSA_clicked(){
    bool icon_change = on_country_clicked_helper("SaharanStates", USA , ui->SaharanStatesUSA );
    if (icon_change){
        change_icon("SaharanStates",ui->SaharanStatesUSA, ui->SaharanStatesUSSR);
    }
}
void MainWindow::on_SaharanStatesUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("SaharanStates", USSR , ui->SaharanStatesUSSR );
    if (icon_change){
       change_icon("SaharanStates",ui->SaharanStatesUSA, ui->SaharanStatesUSSR);
    }
}

void MainWindow::on_SaudiArabiaUSA_clicked(){
    bool icon_change = on_country_clicked_helper("SaudiArabia", USA , ui->SaudiArabiaUSA );
    if (icon_change){
        change_icon("SaudiArabia",ui->SaudiArabiaUSA, ui->SaudiArabiaUSSR);
    }
}
void MainWindow::on_SaudiArabiaUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("SaudiArabia", USSR , ui->SaudiArabiaUSSR );
    if (icon_change){
       change_icon("SaudiArabia",ui->SaudiArabiaUSA, ui->SaudiArabiaUSSR);
    }
}

void MainWindow::on_SomaliaUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Somalia", USA , ui->SomaliaUSA );
    if (icon_change){
        change_icon("Somalia",ui->SomaliaUSA, ui->SomaliaUSSR);
    }
}
void MainWindow::on_SomaliaUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Somalia", USSR , ui->SomaliaUSSR );
    if (icon_change){
       change_icon("Somalia",ui->SomaliaUSA, ui->SomaliaUSSR);
    }
}

void MainWindow::on_SouthAfricaUSA_clicked(){
    bool icon_change = on_country_clicked_helper("SouthAfrica", USA , ui->SouthAfricaUSA );
    if (icon_change){
        change_icon("SouthAfrica",ui->SouthAfricaUSA, ui->SouthAfricaUSSR);
    }
}
void MainWindow::on_SouthAfricaUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("SouthAfrica", USSR , ui->SouthAfricaUSSR );
    if (icon_change){
       change_icon("SouthAfrica",ui->SouthAfricaUSA, ui->SouthAfricaUSSR);
    }
}

void MainWindow::on_SpainPortugalUSA_clicked(){
    bool icon_change = on_country_clicked_helper("SpainPortugal", USA , ui->SpainPortugalUSA );
    if (icon_change){
        change_icon("SpainPortugal",ui->SpainPortugalUSA, ui->SpainPortugalUSSR);
    }
}
void MainWindow::on_SpainPortugalUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("SpainPortugal", USSR , ui->SpainPortugalUSSR );
    if (icon_change){
       change_icon("SpainPortugal",ui->SpainPortugalUSA, ui->SpainPortugalUSSR);
    }
}

void MainWindow::on_SudanUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Sudan", USA , ui->SudanUSA );
    if (icon_change){
        change_icon("Sudan",ui->SudanUSA, ui->SudanUSSR);
    }
}
void MainWindow::on_SudanUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Sudan", USSR , ui->SudanUSSR );
    if (icon_change){
       change_icon("Sudan",ui->SudanUSA, ui->SudanUSSR);
    }
}

void MainWindow::on_SwedenUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Sweden", USA , ui->SwedenUSA );
    if (icon_change){
        change_icon("Sweden",ui->SwedenUSA, ui->SwedenUSSR);
    }
}
void MainWindow::on_SwedenUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Sweden", USSR , ui->SwedenUSSR );
    if (icon_change){
       change_icon("Sweden",ui->SwedenUSA, ui->SwedenUSSR);
    }
}

void MainWindow::on_SyriaUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Syria", USA , ui->SyriaUSA );
    if (icon_change){
        change_icon("Syria",ui->SyriaUSA, ui->SyriaUSSR);
    }
}
void MainWindow::on_SyriaUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Syria", USSR , ui->SyriaUSSR );
    if (icon_change){
       change_icon("Syria",ui->SyriaUSA, ui->SyriaUSSR);
    }
}

void MainWindow::on_TaiwanChinaUSA_clicked(){
    bool icon_change = on_country_clicked_helper("TaiwanChina", USA , ui->TaiwanChinaUSA );
    if (icon_change){
        change_icon("TaiwanChina",ui->TaiwanChinaUSA, ui->TaiwanChinaUSSR);
    }
}
void MainWindow::on_TaiwanChinaUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("TaiwanChina", USSR , ui->TaiwanChinaUSSR );
    if (icon_change){
       change_icon("TaiwanChina",ui->TaiwanChinaUSA, ui->TaiwanChinaUSSR);
    }
}

void MainWindow::on_ThailandUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Thailand", USA , ui->ThailandUSA );
    if (icon_change){
        change_icon("Thailand",ui->ThailandUSA, ui->ThailandUSSR);
    }
}
void MainWindow::on_ThailandUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Thailand", USSR , ui->ThailandUSSR );
    if (icon_change){
       change_icon("Thailand",ui->ThailandUSA, ui->ThailandUSSR);
    }
}

void MainWindow::on_TunisiaUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Tunisia", USA , ui->TunisiaUSA );
    if (icon_change){
        change_icon("Tunisia",ui->TunisiaUSA, ui->TunisiaUSSR);
    }
}
void MainWindow::on_TunisiaUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Tunisia", USSR , ui->TunisiaUSSR );
    if (icon_change){
       change_icon("Tunisia",ui->TunisiaUSA, ui->TunisiaUSSR);
    }
}

void MainWindow::on_TurkeyUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Turkey", USA , ui->TurkeyUSA );
    if (icon_change){
        change_icon("Turkey",ui->TurkeyUSA, ui->TurkeyUSSR);
    }
}
void MainWindow::on_TurkeyUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Turkey", USSR , ui->TurkeyUSSR );
    if (icon_change){
       change_icon("Turkey",ui->TurkeyUSA, ui->TurkeyUSSR);
    }
}

void MainWindow::on_UKUSA_clicked(){
    bool icon_change = on_country_clicked_helper("UK", USA , ui->UKUSA );
    if (icon_change){
        change_icon("UK",ui->UKUSA, ui->UKUSSR);
    }
}
void MainWindow::on_UKUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("UK", USSR , ui->UKUSSR );
    if (icon_change){
       change_icon("UK",ui->UKUSA, ui->UKUSSR);
    }
}

void MainWindow::on_UruguayUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Uruguay", USA , ui->UruguayUSA );
    if (icon_change){
        change_icon("Uruguay",ui->UruguayUSA, ui->UruguayUSSR);
    }
}
void MainWindow::on_UruguayUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Uruguay", USSR , ui->UruguayUSSR );
    if (icon_change){
       change_icon("Uruguay",ui->UruguayUSA, ui->UruguayUSSR);
    }
}

void MainWindow::on_VenezuelaUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Venezuela", USA , ui->VenezuelaUSA );
    if (icon_change){
        change_icon("Venezuela",ui->VenezuelaUSA, ui->VenezuelaUSSR);
    }
}
void MainWindow::on_VenezuelaUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Venezuela", USSR , ui->VenezuelaUSSR );
    if (icon_change){
       change_icon("Venezuela",ui->VenezuelaUSA, ui->VenezuelaUSSR);
    }
}

void MainWindow::on_VietnamUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Vietnam", USA , ui->VietnamUSA );
    if (icon_change){
        change_icon("Vietnam",ui->VietnamUSA, ui->VietnamUSSR);
    }
}
void MainWindow::on_VietnamUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Vietnam", USSR , ui->VietnamUSSR );
    if (icon_change){
       change_icon("Vietnam",ui->VietnamUSA, ui->VietnamUSSR);
    }
}

void MainWindow::on_WGermanyUSA_clicked(){
    bool icon_change = on_country_clicked_helper("WGermany", USA , ui->WGermanyUSA );
    if (icon_change){
        change_icon("WGermany",ui->WGermanyUSA, ui->WGermanyUSSR);
    }
}
void MainWindow::on_WGermanyUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("WGermany", USSR , ui->WGermanyUSSR );
    if (icon_change){
       change_icon("WGermany",ui->WGermanyUSA, ui->WGermanyUSSR);
    }
}

void MainWindow::on_WestAfricanStatesUSA_clicked(){
    bool icon_change = on_country_clicked_helper("WestAfricanStates", USA , ui->WestAfricanStatesUSA );
    if (icon_change){
        change_icon("WestAfricanStates",ui->WestAfricanStatesUSA, ui->WestAfricanStatesUSSR);
    }
}
void MainWindow::on_WestAfricanStatesUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("WestAfricanStates", USSR , ui->WestAfricanStatesUSSR );
    if (icon_change){
       change_icon("WestAfricanStates",ui->WestAfricanStatesUSA, ui->WestAfricanStatesUSSR);
    }
}

void MainWindow::on_YugoslaviaUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Yugoslavia", USA , ui->YugoslaviaUSA );
    if (icon_change){
        change_icon("Yugoslavia",ui->YugoslaviaUSA, ui->YugoslaviaUSSR);
    }
}
void MainWindow::on_YugoslaviaUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Yugoslavia", USSR , ui->YugoslaviaUSSR );
    if (icon_change){
       change_icon("Yugoslavia",ui->YugoslaviaUSA, ui->YugoslaviaUSSR);
    }
}

void MainWindow::on_ZaireUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Zaire", USA , ui->ZaireUSA );
    if (icon_change){
        change_icon("Zaire",ui->ZaireUSA, ui->ZaireUSSR);
    }
}
void MainWindow::on_ZaireUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Zaire", USSR , ui->ZaireUSSR );
    if (icon_change){
       change_icon("Zaire",ui->ZaireUSA, ui->ZaireUSSR);
    }
}

void MainWindow::on_ZimbabweUSA_clicked(){
    bool icon_change = on_country_clicked_helper("Zimbabwe", USA , ui->ZimbabweUSA );
    if (icon_change){
        change_icon("Zimbabwe",ui->ZimbabweUSA, ui->ZimbabweUSSR);
    }
}
void MainWindow::on_ZimbabweUSSR_clicked(){
    bool icon_change = on_country_clicked_helper("Zimbabwe", USSR , ui->ZimbabweUSSR );
    if (icon_change){
       change_icon("Zimbabwe",ui->ZimbabweUSA, ui->ZimbabweUSSR);
    }
}
