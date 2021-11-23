//
// Created by Ricky on 2021/11/18.
//

#include "Country.h"
#include "World.h"
#include "Continent.h"
#include <string>

using namespace std;

// construct all the country :-)
// roughly from up to down

// two superpower
// maybe useful?
// no stability -> set to 0
// no def of key country -> set to false
// cannot be named as "USA" and "USSR" -> add "_country"
Country USA_country(0, "USA_country", false);
Country USSR_country(0, "USSR_country", false);

// Europe
Country Norway(4, "Norway", false);
Country Finland(4, "Finland", false);
Country Sweden(4, "Sweden", false);
Country Denmark(3, "Denmark", false);
Country Canada(4, "Canada", false);
Country UK(5, "UK", false);
Country EGermany(3, "EGermany", true);
Country Poland(3, "Poland", true);
Country Benelux(3, "Benelux", false);
Country WGermany(4, "WGermany", true);
Country Czechoslovakia(3, "Czechoslovakia", false);
Country France(3, "France", true);
Country Austria(4, "Austria", false);
Country Hungary(3, "Hungary", false);
Country Romania(3, "Romania", false);
Country SpainPortugal(2, "SpainPortugal", false);
Country Italy(2, "Italy", true);
Country Yugoslavia(3, "Yugoslavia", false);
Country Bulgaria(3, "Bulgaria", false);
Country Turkey(2, "Turkey", false);
Country Greece(2, "Greece", false);

// Central_America
Country Mexico(2, "Mexico", false);
Country Guatemala(1, "Guatemala", false);
Country Cuba(3, "Cuba", true);
Country Haiti(1, "Haiti", false);
Country DominicanRep(1, "DominicanRep", false);
Country EiSalvador(1, "EiSalvador", false);
Country Honduras(1, "Honduras", false);
Country Nicaragua(1, "Nicaragua", false);
Country CostaRica(3, "CostaRica", false);
Country Panama(2, "Panama", true);

// South_America
Country Venezuela(2, "Venezuela", true);
Country Columbia(1, "Colombia", false);
Country Ecuador(2, "Ecuador", false);
Country Peru(2, "Peru", false);
Country Brazil(2, "Brazil", true);
Country Bolivia(2, "Bolivia", true);
Country Chile(3, "Chile", true);
Country Paraguay(2, "Paraguay", false);
Country Argentina(2, "Argentina", true);
Country Uruguay(2, "Uruguay", false);

// Africa
Country Morocco(3, "Morocco", false);
Country Algeria(2, "Algeria", true);
Country Tunisia(2, "Tunisia", true);
Country WestAfricanStates(2, "WestAfricanStates", false);
Country SaharanStates(1, "SaharanStates", false);
Country Sudan(1, "Sudan", false);
Country IvoryCoast(2, "IvoryCoast", false);
Country Nigeria(1, "Nigeria", true);
Country Ethiopia(1, "Ethiopia", false);
Country Somalia(2, "Somalia", false);
Country Cameroon(1, "Cameroon", false);
Country Zaire(1, "Zaire", true);
Country Kenya(2, "Kenya", false);
Country Angola(1, "Angola", true);
Country Zimbabwe(1, "Zimbabwe", false);
Country SEAfricanStates(1, "SEAfricanStates", false);
Country Botswana(2, "Botswana", false);
Country SouthAfrica(3, "SouthAfrica", true);

// Middle_East
Country Lebanon(1, "Lebanon", false);
Country Syria(2, "Syria", false);
Country Israel(4, "Israel", true);
Country Iraq(3, "Iraq", true);
Country Iran(2, "Iran", true);
Country Libya(2, "Libya", true);
Country Egypt(2, "Egypt", true);
Country Jordan(2, "Jordan", false);
Country GulfStates(3, "GulfStates", false);
Country SaudiArabia(3, "SaudiArabia", true);

// Asia
Country NKorea(3, "NKorea", true);
Country Afghanistan(2, "Afghanistan", false);
Country China(5, "China", false);
Country SKorea(3, "SKorea", true);
Country Japan(4, "Japan", true);
Country Pakistan(2, "Pakistan", true);
Country India(3, "India", true);
Country Burma(2, "Burma", false);
Country LaosCambodia(1, "LaosCambodia", false);
Country TaiwanChina(3, "TaiwanChina", false);
Country Thailand(2, "Thailand", true);
Country Vietnam(1, "Vietnam", false);
Country Philippines(2, "Philippines", false);
Country Malaysia(2, "Malaysia", false);
Country Indonesia(1, "Indonesia", false);
Country Australia(4, "Australia", false);


// construct an array contain all the countries
Country* this_arr[] = {&USA_country, &USSR_country, &Norway, &Finland,
                      &Sweden, &Denmark, &Canada, &UK, &EGermany,
                      &Poland, &Benelux, &WGermany, &Czechoslovakia,
                      &France, &Austria, &Hungary, &Romania, &SpainPortugal,
                      &Italy, &Yugoslavia, &Bulgaria, &Turkey, &Greece,
                      &Mexico, &Guatemala, &Cuba, &Haiti, &DominicanRep,
                      &EiSalvador, &Honduras, &Nicaragua, &CostaRica,
                      &Panama, &Venezuela, &Columbia, &Ecuador, &Peru,
                      &Brazil, &Bolivia, &Chile, &Paraguay, &Argentina,
                      &Uruguay, &Morocco, &Algeria, &Tunisia,
                      &WestAfricanStates, &SaharanStates, &Sudan,
                      &IvoryCoast, &Nigeria, &Ethiopia, &Somalia,
                      &Cameroon, &Zaire, &Kenya, &Angola, &Zimbabwe,
                      &SEAfricanStates, &Botswana, &SouthAfrica, &Lebanon,
                      &Syria, &Israel, &Iraq, &Iran, &Libya, &Egypt,
                      &Jordan, &GulfStates, &SaudiArabia, &NKorea,
                      &Afghanistan, &China, &SKorea, &Japan, &Pakistan,
                      &India, &Burma, &LaosCambodia, &TaiwanChina,
                      &Thailand, &Vietnam, &Philippines, &Malaysia,
                      &Indonesia, &Australia};


// set neighbors in the function (^_^) !!
// roughly from up to down

void World::allocate_all_country(){
    // two superpower
    USA_country.set_neighbor(&Canada);
    USA_country.set_neighbor(&Japan);
    USA_country.set_neighbor(&Mexico);
    USA_country.set_neighbor(&Cuba);
    USSR_country.set_neighbor(&Finland);
    USSR_country.set_neighbor(&Poland);
    USSR_country.set_neighbor(&Romania);
    USSR_country.set_neighbor(&NKorea);
    USSR_country.set_neighbor(&Afghanistan);
    USSR_country.set_neighbor(&China);

    // Europe
    Norway.set_neighbor(&Sweden);
    Norway.set_neighbor(&UK);
    Finland.set_neighbor(&Sweden);
    Finland.set_neighbor(&USSR_country);
    Sweden.set_neighbor(&Norway);
    Sweden.set_neighbor(&Finland);
    Sweden.set_neighbor(&Denmark);
    Denmark.set_neighbor(&Sweden);
    Denmark.set_neighbor(&WGermany);
    Canada.set_neighbor(&UK);
    Canada.set_neighbor(&USA_country);
    UK.set_neighbor(&Canada);
    UK.set_neighbor(&Norway);
    UK.set_neighbor(&Benelux);
    UK.set_neighbor(&France);
    EGermany.set_neighbor(&Poland);
    EGermany.set_neighbor(&WGermany);
    EGermany.set_neighbor(&Austria);
    EGermany.set_neighbor(&Czechoslovakia);
    Poland.set_neighbor(&EGermany);
    Poland.set_neighbor(&Czechoslovakia);
    Poland.set_neighbor(&USSR_country);
    Benelux.set_neighbor(&UK);
    Benelux.set_neighbor(&WGermany);
    WGermany.set_neighbor(&Denmark);
    WGermany.set_neighbor(&EGermany);
    WGermany.set_neighbor(&Benelux);
    WGermany.set_neighbor(&France);
    WGermany.set_neighbor(&Austria);
    Czechoslovakia.set_neighbor(&EGermany);
    Czechoslovakia.set_neighbor(&Poland);
    Czechoslovakia.set_neighbor(&Hungary);
    France.set_neighbor(&UK);
    France.set_neighbor(&WGermany);
    France.set_neighbor(&SpainPortugal);
    France.set_neighbor(&Algeria);
    France.set_neighbor(&Italy);
    Austria.set_neighbor(&WGermany);
    Austria.set_neighbor(&EGermany);
    Austria.set_neighbor(&Hungary);
    Austria.set_neighbor(&Italy);
    Hungary.set_neighbor(&Czechoslovakia);
    Hungary.set_neighbor(&Austria);
    Hungary.set_neighbor(&Romania);
    Hungary.set_neighbor(&Yugoslavia);
    Romania.set_neighbor(&USSR_country);
    Romania.set_neighbor(&Hungary);
    Romania.set_neighbor(&Yugoslavia);
    Romania.set_neighbor(&Turkey);
    SpainPortugal.set_neighbor(&France);
    SpainPortugal.set_neighbor(&Italy);
    SpainPortugal.set_neighbor(&Morocco);
    Italy.set_neighbor(&France);
    Italy.set_neighbor(&Austria);
    Italy.set_neighbor(&Yugoslavia);
    Italy.set_neighbor(&SpainPortugal);
    Italy.set_neighbor(&Greece);
    Yugoslavia.set_neighbor(&Hungary);
    Yugoslavia.set_neighbor(&Romania);
    Yugoslavia.set_neighbor(&Italy);
    Yugoslavia.set_neighbor(&Greece);
    Bulgaria.set_neighbor(&Turkey);
    Bulgaria.set_neighbor(&Greece);
    Turkey.set_neighbor(&Romania);
    Turkey.set_neighbor(&Bulgaria);
    Turkey.set_neighbor(&Greece);
    Turkey.set_neighbor(&Syria);
    Greece.set_neighbor(&Italy);
    Greece.set_neighbor(&Yugoslavia);
    Greece.set_neighbor(&Bulgaria);
    Greece.set_neighbor(&Turkey);

    // Central_America
    Mexico.set_neighbor(&USA_country);
    Mexico.set_neighbor(&Guatemala);
    Guatemala.set_neighbor(&Mexico);
    Guatemala.set_neighbor(&EiSalvador);
    Guatemala.set_neighbor(&Honduras);
    Cuba.set_neighbor(&USA_country);
    Cuba.set_neighbor(&Haiti);
    Cuba.set_neighbor(&Nicaragua);
    Haiti.set_neighbor(&Cuba);
    Haiti.set_neighbor(&DominicanRep);
    DominicanRep.set_neighbor(&Haiti);
    EiSalvador.set_neighbor(&Guatemala);
    EiSalvador.set_neighbor(&Honduras);
    Honduras.set_neighbor(&Guatemala);
    Honduras.set_neighbor(&EiSalvador);
    Honduras.set_neighbor(&Nicaragua);
    Honduras.set_neighbor(&CostaRica);
    Nicaragua.set_neighbor(&Cuba);
    Nicaragua.set_neighbor(&Honduras);
    Nicaragua.set_neighbor(&CostaRica);
    CostaRica.set_neighbor(&Honduras);
    CostaRica.set_neighbor(&Nicaragua);
    CostaRica.set_neighbor(&Panama);
    Panama.set_neighbor(&CostaRica);
    Panama.set_neighbor(&Columbia);

    // South_America
    Venezuela.set_neighbor(&Columbia);
    Venezuela.set_neighbor(&Brazil);
    Columbia.set_neighbor(&Panama);
    Columbia.set_neighbor(&Venezuela);
    Columbia.set_neighbor(&Ecuador);
    Ecuador.set_neighbor(&Columbia);
    Ecuador.set_neighbor(&Peru);
    Peru.set_neighbor(&Ecuador);
    Peru.set_neighbor(&Bolivia);
    Peru.set_neighbor(&Chile);
    Brazil.set_neighbor(&Venezuela);
    Brazil.set_neighbor(&Uruguay);
    Bolivia.set_neighbor(&Peru);
    Bolivia.set_neighbor(&Paraguay);
    Chile.set_neighbor(&Peru);
    Chile.set_neighbor(&Argentina);
    Paraguay.set_neighbor(&Bolivia);
    Paraguay.set_neighbor(&Argentina);
    Paraguay.set_neighbor(&Uruguay);
    Argentina.set_neighbor(&Chile);
    Argentina.set_neighbor(&Paraguay);
    Argentina.set_neighbor(&Uruguay);
    Uruguay.set_neighbor(&Brazil);
    Uruguay.set_neighbor(&Paraguay);
    Uruguay.set_neighbor(&Argentina);

    // Africa
    Morocco.set_neighbor(&SpainPortugal);
    Morocco.set_neighbor(&Algeria);
    Morocco.set_neighbor(&WestAfricanStates);
    Algeria.set_neighbor(&France);
    Algeria.set_neighbor(&Morocco);
    Algeria.set_neighbor(&Tunisia);
    Algeria.set_neighbor(&SaharanStates);
    Tunisia.set_neighbor(&Algeria);
    Tunisia.set_neighbor(&Libya);
    WestAfricanStates.set_neighbor(&Morocco);
    WestAfricanStates.set_neighbor(&IvoryCoast);
    SaharanStates.set_neighbor(&Algeria);
    SaharanStates.set_neighbor(&Sudan);
    Sudan.set_neighbor(&Egypt);
    Sudan.set_neighbor(&Ethiopia);
    IvoryCoast.set_neighbor(&WestAfricanStates);
    IvoryCoast.set_neighbor(&Nigeria);
    Nigeria.set_neighbor(&SaharanStates);
    Nigeria.set_neighbor(&IvoryCoast);
    Nigeria.set_neighbor(&Cameroon);
    Ethiopia.set_neighbor(&Sudan);
    Ethiopia.set_neighbor(&Somalia);
    Cameroon.set_neighbor(&Nigeria);
    Cameroon.set_neighbor(&Zaire);
    Zaire.set_neighbor(&Cameroon);
    Zaire.set_neighbor(&Angola);
    Zaire.set_neighbor(&Zimbabwe);
    Kenya.set_neighbor(&Somalia);
    Kenya.set_neighbor(&SEAfricanStates);
    Angola.set_neighbor(&Zaire);
    Angola.set_neighbor(&Botswana);
    Angola.set_neighbor(&SouthAfrica);
    Zimbabwe.set_neighbor(&SEAfricanStates);
    Zimbabwe.set_neighbor(&Zaire);
    Zimbabwe.set_neighbor(&Botswana);
    SEAfricanStates.set_neighbor(&Kenya);
    SEAfricanStates.set_neighbor(&Zimbabwe);
    Botswana.set_neighbor(&Angola);
    Botswana.set_neighbor(&Zimbabwe);
    Botswana.set_neighbor(&SouthAfrica);
    SouthAfrica.set_neighbor(&Angola);
    SouthAfrica.set_neighbor(&Botswana);

    // Middle_East
    Lebanon.set_neighbor(&Syria);
    Lebanon.set_neighbor(&Israel);
    Lebanon.set_neighbor(&Jordan);
    Syria.set_neighbor(&Turkey);
    Syria.set_neighbor(&Lebanon);
    Syria.set_neighbor(&Israel);
    Israel.set_neighbor(&Lebanon);
    Israel.set_neighbor(&Syria);
    Israel.set_neighbor(&Egypt);
    Israel.set_neighbor(&Jordan);
    Iraq.set_neighbor(&Iran);
    Iraq.set_neighbor(&Jordan);
    Iraq.set_neighbor(&SaudiArabia);
    Iraq.set_neighbor(&GulfStates);
    Iran.set_neighbor(&Iraq);
    Iran.set_neighbor(&Afghanistan);
    Iran.set_neighbor(&Pakistan);
    Libya.set_neighbor(&Tunisia);
    Libya.set_neighbor(&Egypt);
    Egypt.set_neighbor(&Israel);
    Egypt.set_neighbor(&Libya);
    Egypt.set_neighbor(&Sudan);
    Jordan.set_neighbor(&Israel);
    Jordan.set_neighbor(&Iraq);
    Jordan.set_neighbor(&Lebanon);
    Jordan.set_neighbor(&SaudiArabia);
    GulfStates.set_neighbor(&Iraq);
    GulfStates.set_neighbor(&SaudiArabia);
    SaudiArabia.set_neighbor(&Jordan);
    SaudiArabia.set_neighbor(&Iraq);
    SaudiArabia.set_neighbor(&GulfStates);

    // Asia
    NKorea.set_neighbor(&USSR_country);
    NKorea.set_neighbor(&China);
    NKorea.set_neighbor(&SKorea);
    Afghanistan.set_neighbor(&USSR_country);
    Afghanistan.set_neighbor(&Iran);
    Afghanistan.set_neighbor(&Pakistan);
    China.set_neighbor(&NKorea);
    China.set_neighbor(&TaiwanChina);
    China.set_neighbor(&Vietnam);
    China.set_neighbor(&LaosCambodia);
    China.set_neighbor(&Burma);
    China.set_neighbor(&USSR_country);
    SKorea.set_neighbor(&NKorea);
    SKorea.set_neighbor(&Japan);
    SKorea.set_neighbor(&TaiwanChina);
    Japan.set_neighbor(&SKorea);
    Japan.set_neighbor(&TaiwanChina);
    Japan.set_neighbor(&Philippines);
    Japan.set_neighbor(&USA_country);
    Pakistan.set_neighbor(&Afghanistan);
    Pakistan.set_neighbor(&Iran);
    Pakistan.set_neighbor(&India);
    India.set_neighbor(&Pakistan);
    India.set_neighbor(&Burma);
    Burma.set_neighbor(&India);
    Burma.set_neighbor(&China);
    Burma.set_neighbor(&LaosCambodia);
    LaosCambodia.set_neighbor(&China);
    LaosCambodia.set_neighbor(&Burma);
    LaosCambodia.set_neighbor(&Thailand);
    LaosCambodia.set_neighbor(&Vietnam);
    TaiwanChina.set_neighbor(&China);
    TaiwanChina.set_neighbor(&SKorea);
    TaiwanChina.set_neighbor(&Japan);
    Thailand.set_neighbor(&LaosCambodia);
    Thailand.set_neighbor(&Vietnam);
    Thailand.set_neighbor(&Malaysia);
    Vietnam.set_neighbor(&China);
    Vietnam.set_neighbor(&LaosCambodia);
    Vietnam.set_neighbor(&Thailand);
    Philippines.set_neighbor(&Japan);
    Philippines.set_neighbor(&Indonesia);
    Malaysia.set_neighbor(&Thailand);
    Malaysia.set_neighbor(&Indonesia);
    Malaysia.set_neighbor(&Australia);
    Indonesia.set_neighbor(&Malaysia);
    Indonesia.set_neighbor(&Philippines);
    Australia.set_neighbor(&Malaysia);
}

// construst continents
void World::allocate_all_contient() {
    Continent EUROPE(3, 7, -1, Continent::Contient_type::Europe);
    for (int i = 2; i <= 22; ++i){
        EUROPE.add_country(this_arr[i]);
    }
    Continent CENTRALAMERICA(1, 3, 5, Continent::Contient_type::Central_America);
    for (int i = 23; i <= 32; ++i){
        CENTRALAMERICA.add_country(this_arr[i]);
    }
    Continent SOUTHAMERICA(2, 5, 6, Continent::Contient_type::South_America);
    for (int i = 33; i <= 42; ++i){
        SOUTHAMERICA.add_country(this_arr[i]);
    }
    Continent AFRICA(1, 4, 6, Continent::Contient_type::Africa);
    for (int i = 43; i <= 60; ++i){
        AFRICA.add_country(this_arr[i]);
    }
    Continent MIDDLEEAST(3, 5, 7, Continent::Contient_type::Middle_East);
    for (int i = 61; i <= 70; ++i){
        MIDDLEEAST.add_country(this_arr[i]);
    }
    Continent ASIA(3, 7, 9, Continent::Contient_type::Asia);
    for (int i = 71; i <= 86; ++i){
        ASIA.add_country(this_arr[i]);
    }
}




