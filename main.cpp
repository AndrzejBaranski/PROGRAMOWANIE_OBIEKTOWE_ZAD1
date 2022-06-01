#include <iostream>
#include "Samochod.h"

int main() {
    Samochod *S1 = new Samochod("Mercedes Benz", "S 100",5,3.5,8.8,"SK 34RV66");
    S1->WypiszInfo();
    std::cout<<"Liczba istniejących samochodów wynosi : "<<S1->getLiczbeSamochodow()<<'\n';
    Samochod *S2 = new Samochod("BMW", "M5",5,5.8,11.8,"WAW 56YV89");
    S2->WypiszInfo();
    std::cout<<"Liczba istniejących samochodów wynosi : "<<S2->getLiczbeSamochodow()<<'\n';
    std::cout<<"Na trasie o długości 780km, BMW spali "<<S2->getObliczSpalanie(780)<<" litrów paliwa."<<'\n';
    std::cout<<"Koszty przejazu na powyższej trasie BMW wyniosą "<<S2->ObliczKosztPrzejazdu(780.0,7.25)<<" PLN"<<'\n';
    std::cout<<"Koszty przejazdu Mercedesem na trasie 1230km wyniosą "<<S1->ObliczKosztPrzejazdu(1230.0, 7.25)<<" PLN"<<'\n';
    return 0;
}