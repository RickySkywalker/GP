#include "mainwindow.h"
#include <QMainWindow>
#include <QPushButton>
#include <map>
using namespace std;

void MainWindow::initialize_button_style(){


    //Initialize the coup button style
    change_btn_coup_style();


    //Initialize all countr
    if (true){
        ui->AfghanistanUSA->setFlat(true);
        ui->AfghanistanUSSR->setFlat(true);

        ui->AlgeriaUSA->setFlat(true);
        ui->AlgeriaUSSR->setFlat(true);

        ui->AngolaUSA->setFlat(true);
        ui->AngolaUSSR->setFlat(true);

        ui->ArgentinaUSA->setFlat(true);
        ui->ArgentinaUSSR->setFlat(true);

        ui->AustraliaUSA->setFlat(true);
        ui->AustraliaUSSR->setFlat(true);

        ui->AustriaUSA->setFlat(true);
        ui->AustriaUSSR->setFlat(true);

        ui->BeneluxUSA->setFlat(true);
        ui->BeneluxUSSR->setFlat(true);

        ui->BoliviaUSA->setFlat(true);
        ui->BoliviaUSSR->setFlat(true);

        ui->BotswanaUSA->setFlat(true);
        ui->BotswanaUSSR->setFlat(true);

        ui->BrazilUSA->setFlat(true);
        ui->BrazilUSSR->setFlat(true);

        ui->BulgariaUSA->setFlat(true);
        ui->BulgariaUSSR->setFlat(true);

        ui->BurmaUSA->setFlat(true);
        ui->BurmaUSSR->setFlat(true);

        ui->CameroonUSA->setFlat(true);
        ui->CameroonUSSR->setFlat(true);

        ui->CanadaUSA->setFlat(true);
        ui->CanadaUSSR->setFlat(true);

        ui->ChileUSA->setFlat(true);
        ui->ChileUSSR->setFlat(true);

        ui->ChinaUSA->setFlat(true);
        ui->ChinaUSSR->setFlat(true);

        ui->ColombiaUSA->setFlat(true);
        ui->ColombiaUSSR->setFlat(true);

        ui->CostaRicaUSA->setFlat(true);
        ui->CostaRicaUSSR->setFlat(true);

        ui->CubaUSA->setFlat(true);
        ui->CubaUSSR->setFlat(true);

        ui->CzechoslovakiaUSA->setFlat(true);
        ui->CzechoslovakiaUSSR->setFlat(true);

        ui->DenmarkUSA->setFlat(true);
        ui->DenmarkUSSR->setFlat(true);

        ui->DominicanRepUSA->setFlat(true);
        ui->DominicanRepUSSR->setFlat(true);

        ui->EGermanyUSA->setFlat(true);
        ui->EGermanyUSSR->setFlat(true);

        ui->EcuadorUSA->setFlat(true);
        ui->EcuadorUSSR->setFlat(true);

        ui->EgyptUSA->setFlat(true);
        ui->EgyptUSSR->setFlat(true);

        ui->ElSalvadorUSA->setFlat(true);
        ui->ElSalvadorUSSR->setFlat(true);

        ui->EthiopiaUSA->setFlat(true);
        ui->EthiopiaUSSR->setFlat(true);

        ui->FinlandUSA->setFlat(true);
        ui->FinlandUSSR->setFlat(true);

        ui->FranceUSA->setFlat(true);
        ui->FranceUSSR->setFlat(true);

        ui->GreeceUSA->setFlat(true);
        ui->GreeceUSSR->setFlat(true);

        ui->GuatemalaUSA->setFlat(true);
        ui->GuatemalaUSSR->setFlat(true);

        ui->GulfStatesUSA->setFlat(true);
        ui->GulfStatesUSSR->setFlat(true);

        ui->HaitiUSA->setFlat(true);
        ui->HaitiUSSR->setFlat(true);

        ui->HondurasUSA->setFlat(true);
        ui->HondurasUSSR->setFlat(true);

        ui->HungaryUSA->setFlat(true);
        ui->HungaryUSSR->setFlat(true);

        ui->IndiaUSA->setFlat(true);
        ui->IndiaUSSR->setFlat(true);

        ui->IndonesiaUSA->setFlat(true);
        ui->IndonesiaUSSR->setFlat(true);

        ui->IranUSA->setFlat(true);
        ui->IranUSSR->setFlat(true);

        ui->IraqUSA->setFlat(true);
        ui->IraqUSSR->setFlat(true);

        ui->IsraelUSA->setFlat(true);
        ui->IsraelUSSR->setFlat(true);

        ui->ItalyUSA->setFlat(true);
        ui->ItalyUSSR->setFlat(true);

        ui->IvoryCoastUSA->setFlat(true);
        ui->IvoryCoastUSSR->setFlat(true);

        ui->JapanUSA->setFlat(true);
        ui->JapanUSSR->setFlat(true);

        ui->JordanUSA->setFlat(true);
        ui->JordanUSSR->setFlat(true);

        ui->KenyaUSA->setFlat(true);
        ui->KenyaUSSR->setFlat(true);

        ui->LaosCambodiaUSA->setFlat(true);
        ui->LaosCambodiaUSSR->setFlat(true);

        ui->LebanonUSA->setFlat(true);
        ui->LebanonUSSR->setFlat(true);

        ui->LibyaUSA->setFlat(true);
        ui->LibyaUSSR->setFlat(true);

        ui->MalaysiaUSA->setFlat(true);
        ui->MalaysiaUSSR->setFlat(true);

        ui->MexicoUSA->setFlat(true);
        ui->MexicoUSSR->setFlat(true);

        ui->MoroccoUSA->setFlat(true);
        ui->MoroccoUSSR->setFlat(true);

        ui->NKoreaUSA->setFlat(true);
        ui->NKoreaUSSR->setFlat(true);

        ui->NicaraguaUSA->setFlat(true);
        ui->NicaraguaUSSR->setFlat(true);

        ui->NigeriaUSA->setFlat(true);
        ui->NigeriaUSSR->setFlat(true);

        ui->NorwayUSA->setFlat(true);
        ui->NorwayUSSR->setFlat(true);

        ui->PakistanUSA->setFlat(true);
        ui->PakistanUSSR->setFlat(true);

        ui->PanamaUSA->setFlat(true);
        ui->PanamaUSSR->setFlat(true);

        ui->ParaguayUSA->setFlat(true);
        ui->ParaguayUSSR->setFlat(true);

        ui->PeruUSA->setFlat(true);
        ui->PeruUSSR->setFlat(true);

        ui->PhilippinesUSA->setFlat(true);
        ui->PhilippinesUSSR->setFlat(true);

        ui->PolandUSA->setFlat(true);
        ui->PolandUSSR->setFlat(true);

        ui->RomaniaUSA->setFlat(true);
        ui->RomaniaUSSR->setFlat(true);

        ui->SEAfricanStatesUSA->setFlat(true);
        ui->SEAfricanStatesUSSR->setFlat(true);

        ui->SKoreaUSA->setFlat(true);
        ui->SKoreaUSSR->setFlat(true);

        ui->SaharanStatesUSA->setFlat(true);
        ui->SaharanStatesUSSR->setFlat(true);

        ui->SaudiArabiaUSA->setFlat(true);
        ui->SaudiArabiaUSSR->setFlat(true);

        ui->SomaliaUSA->setFlat(true);
        ui->SomaliaUSSR->setFlat(true);

        ui->SouthAfricaUSA->setFlat(true);
        ui->SouthAfricaUSSR->setFlat(true);

        ui->SpainPortugalUSA->setFlat(true);
        ui->SpainPortugalUSSR->setFlat(true);

        ui->SudanUSA->setFlat(true);
        ui->SudanUSSR->setFlat(true);

        ui->SwedenUSA->setFlat(true);
        ui->SwedenUSSR->setFlat(true);

        ui->SyriaUSA->setFlat(true);
        ui->SyriaUSSR->setFlat(true);

        ui->TaiwanChinaUSA->setFlat(true);
        ui->TaiwanChinaUSSR->setFlat(true);

        ui->ThailandUSA->setFlat(true);
        ui->ThailandUSSR->setFlat(true);

        ui->TunisiaUSA->setFlat(true);
        ui->TunisiaUSSR->setFlat(true);

        ui->TurkeyUSA->setFlat(true);
        ui->TurkeyUSSR->setFlat(true);

        ui->UKUSA->setFlat(true);
        ui->UKUSSR->setFlat(true);

        ui->UruguayUSA->setFlat(true);
        ui->UruguayUSSR->setFlat(true);

        ui->VenezuelaUSA->setFlat(true);
        ui->VenezuelaUSSR->setFlat(true);

        ui->VietnamUSA->setFlat(true);
        ui->VietnamUSSR->setFlat(true);

        ui->WGermanyUSA->setFlat(true);
        ui->WGermanyUSSR->setFlat(true);

        ui->WestAfricanStatesUSA->setFlat(true);
        ui->WestAfricanStatesUSSR->setFlat(true);

        ui->YugoslaviaUSA->setFlat(true);
        ui->YugoslaviaUSSR->setFlat(true);

        ui->ZaireUSA->setFlat(true);
        ui->ZaireUSSR->setFlat(true);

        ui->ZimbabweUSA->setFlat(true);
        ui->ZimbabweUSSR->setFlat(true);
    }
}

//This is a function that allocate all the button map for USSR and USA
void MainWindow::initialize_button_list(){

    USSR_button_map.insert(pair<std::string, QPushButton*>("Afghanistan", ui->AfghanistanUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Afghanistan", ui->AfghanistanUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Algeria", ui->AlgeriaUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Algeria", ui->AlgeriaUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Angola", ui->AngolaUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Angola", ui->AngolaUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Argentina", ui->ArgentinaUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Argentina", ui->ArgentinaUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Australia", ui->AustraliaUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Australia", ui->AustraliaUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Austria", ui->AustriaUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Austria", ui->AustriaUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Benelux", ui->BeneluxUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Benelux", ui->BeneluxUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Bolivia", ui->BoliviaUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Bolivia", ui->BoliviaUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Botswana", ui->BotswanaUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Botswana", ui->BotswanaUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Brazil", ui->BrazilUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Brazil", ui->BrazilUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Bulgaria", ui->BulgariaUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Bulgaria", ui->BulgariaUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Burma", ui->BurmaUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Burma", ui->BurmaUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Cameroon", ui->CameroonUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Cameroon", ui->CameroonUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Canada", ui->CanadaUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Canada", ui->CanadaUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Chile", ui->ChileUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Chile", ui->ChileUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("China", ui->ChinaUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("China", ui->ChinaUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Colombia", ui->ColombiaUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Colombia", ui->ColombiaUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("CostaRica", ui->CostaRicaUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("CostaRica", ui->CostaRicaUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Cuba", ui->CubaUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Cuba", ui->CubaUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Czechoslovakia", ui->CzechoslovakiaUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Czechoslovakia", ui->CzechoslovakiaUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Denmark", ui->DenmarkUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Denmark", ui->DenmarkUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("DominicanRep", ui->DominicanRepUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("DominicanRep", ui->DominicanRepUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("EGermany", ui->EGermanyUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("EGermany", ui->EGermanyUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Ecuador", ui->EcuadorUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Ecuador", ui->EcuadorUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Egypt", ui->EgyptUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Egypt", ui->EgyptUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("ElSalvador", ui->ElSalvadorUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("ElSalvador", ui->ElSalvadorUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Ethiopia", ui->EthiopiaUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Ethiopia", ui->EthiopiaUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Finland", ui->FinlandUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Finland", ui->FinlandUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("France", ui->FranceUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("France", ui->FranceUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Greece", ui->GreeceUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Greece", ui->GreeceUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Guatemala", ui->GuatemalaUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Guatemala", ui->GuatemalaUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("GulfStates", ui->GulfStatesUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("GulfStates", ui->GulfStatesUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Haiti", ui->HaitiUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Haiti", ui->HaitiUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Honduras", ui->HondurasUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Honduras", ui->HondurasUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Hungary", ui->HungaryUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Hungary", ui->HungaryUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("India", ui->IndiaUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("India", ui->IndiaUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Indonesia", ui->IndonesiaUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Indonesia", ui->IndonesiaUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Iran", ui->IranUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Iran", ui->IranUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Iraq", ui->IraqUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Iraq", ui->IraqUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Israel", ui->IsraelUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Israel", ui->IsraelUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Italy", ui->ItalyUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Italy", ui->ItalyUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("IvoryCoast", ui->IvoryCoastUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("IvoryCoast", ui->IvoryCoastUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Japan", ui->JapanUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Japan", ui->JapanUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Jordan", ui->JordanUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Jordan", ui->JordanUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Kenya", ui->KenyaUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Kenya", ui->KenyaUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("LaosCambodia", ui->LaosCambodiaUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("LaosCambodia", ui->LaosCambodiaUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Lebanon", ui->LebanonUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Lebanon", ui->LebanonUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Libya", ui->LibyaUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Libya", ui->LibyaUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Malaysia", ui->MalaysiaUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Malaysia", ui->MalaysiaUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Mexico", ui->MexicoUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Mexico", ui->MexicoUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Morocco", ui->MoroccoUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Morocco", ui->MoroccoUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("NKorea", ui->NKoreaUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("NKorea", ui->NKoreaUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Nicaragua", ui->NicaraguaUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Nicaragua", ui->NicaraguaUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Nigeria", ui->NigeriaUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Nigeria", ui->NigeriaUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Norway", ui->NorwayUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Norway", ui->NorwayUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Pakistan", ui->PakistanUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Pakistan", ui->PakistanUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Panama", ui->PanamaUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Panama", ui->PanamaUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Paraguay", ui->ParaguayUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Paraguay", ui->ParaguayUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Peru", ui->PeruUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Peru", ui->PeruUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Philippines", ui->PhilippinesUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Philippines", ui->PhilippinesUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Poland", ui->PolandUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Poland", ui->PolandUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Romania", ui->RomaniaUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Romania", ui->RomaniaUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("SEAfricanStates", ui->SEAfricanStatesUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("SEAfricanStates", ui->SEAfricanStatesUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("SKorea", ui->SKoreaUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("SKorea", ui->SKoreaUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("SaharanStates", ui->SaharanStatesUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("SaharanStates", ui->SaharanStatesUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("SaudiArabia", ui->SaudiArabiaUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("SaudiArabia", ui->SaudiArabiaUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Somalia", ui->SomaliaUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Somalia", ui->SomaliaUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("SouthAfrica", ui->SouthAfricaUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("SouthAfrica", ui->SouthAfricaUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("SpainPortugal", ui->SpainPortugalUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("SpainPortugal", ui->SpainPortugalUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Sudan", ui->SudanUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Sudan", ui->SudanUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Sweden", ui->SwedenUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Sweden", ui->SwedenUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Syria", ui->SyriaUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Syria", ui->SyriaUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("TaiwanChina", ui->TaiwanChinaUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("TaiwanChina", ui->TaiwanChinaUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Thailand", ui->ThailandUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Thailand", ui->ThailandUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Tunisia", ui->TunisiaUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Tunisia", ui->TunisiaUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Turkey", ui->TurkeyUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Turkey", ui->TurkeyUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("UK", ui->UKUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("UK", ui->UKUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Uruguay", ui->UruguayUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Uruguay", ui->UruguayUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Venezuela", ui->VenezuelaUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Venezuela", ui->VenezuelaUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Vietnam", ui->VietnamUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Vietnam", ui->VietnamUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("WGermany", ui->WGermanyUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("WGermany", ui->WGermanyUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("WestAfricanStates", ui->WestAfricanStatesUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("WestAfricanStates", ui->WestAfricanStatesUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Yugoslavia", ui->YugoslaviaUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Yugoslavia", ui->YugoslaviaUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Zaire", ui->ZaireUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Zaire", ui->ZaireUSA));

    USSR_button_map.insert(pair<std::string, QPushButton*>("Zimbabwe", ui->ZimbabweUSSR));
    USA_button_map.insert(pair<std::string, QPushButton*>("Zimbabwe", ui->ZimbabweUSA));

}


void MainWindow::initialize_default_influence(){
    initial_setup_helper(4, "EGermany", USSR, ui->EGermanyUSSR, ui->EGermanyUSA, ui->EGermanyUSSR);
    initial_setup_helper(4, "Poland", USSR, ui->PolandUSSR, ui->PolandUSA, ui->PolandUSSR);
    initial_setup_helper(4, "China", USSR, ui->ChinaUSSR, ui->ChinaUSA, ui->ChinaUSSR);
    initial_setup_helper(3, "NKorea", USSR, ui->NKoreaUSSR, ui->NKoreaUSA, ui->NKoreaUSSR);
    initial_setup_helper(1, "Yugoslavia", USSR, ui->YugoslaviaUSSR, ui->YugoslaviaUSA, ui->YugoslaviaUSSR);
    initial_setup_helper(1,"Syria", USSR, ui->SyriaUSSR, ui->SyriaUSA, ui->SyriaUSSR);
    initial_setup_helper(1, "Iraq", USSR, ui->IraqUSSR, ui->IraqUSA, ui->IraqUSSR);

    initial_setup_helper(2, "Canada", USA, ui->CanadaUSA, ui->CanadaUSA, ui->CanadaUSSR);
    initial_setup_helper(2, "Panama", USA, ui->PanamaUSA, ui->PanamaUSA, ui->PanamaUSSR);
    initial_setup_helper(5, "UK", USA, ui->UKUSA, ui->UKUSA, ui->UKUSSR);
    initial_setup_helper(4, "WGermany", USA, ui->WGermanyUSA, ui->WGermanyUSA, ui->WGermanyUSSR);
    initial_setup_helper(3, "Italy", USA, ui->ItalyUSA, ui->ItalyUSA, ui->ItalyUSSR);
    initial_setup_helper(1, "Israel", USA, ui->IsraelUSA, ui->IsraelUSA, ui->IsraelUSSR);
    initial_setup_helper(1, "Iran", USA, ui->IranUSA, ui->IranUSA, ui->IranUSSR);
    initial_setup_helper(1, "SKorea", USA, ui->SKoreaUSA, ui->SKoreaUSA, ui->SKoreaUSSR);
    initial_setup_helper(1, "Japan", USA, ui->JapanUSA, ui->JapanUSA, ui->JapanUSSR);
    initial_setup_helper(1, "Philippines", USA, ui->PhilippinesUSA, ui->PhilippinesUSA, ui->PhilippinesUSSR);
    initial_setup_helper(4, "Australia", USA, ui->AustraliaUSA, ui->AustraliaUSA, ui->AustraliaUSSR);
    initial_setup_helper(1, "SouthAfrica", USA, ui->SouthAfricaUSA, ui->SouthAfricaUSA, ui->SouthAfricaUSSR);
}
