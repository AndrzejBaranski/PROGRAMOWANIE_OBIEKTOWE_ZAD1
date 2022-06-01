//
// Created by allti on 01.06.2022.
//

#ifndef PROGRAMOWANIE_OBIEKTOWE_ZAD1_SAMOCHOD_H
#define PROGRAMOWANIE_OBIEKTOWE_ZAD1_SAMOCHOD_H
#include <string>

class Samochod {
    static int liczbaSamochodow;
    std::string marka;
    std::string model;
    int iloscDrzwi;
    double pojemnoscSilnika;
    double srednieSpalanie;
    std::string numerRejestracyjny;
//Metody prywatne
    double ObliczSpalanie(double dlugoscTrasy);
public:
//konstruktor domyślny:
    Samochod();
//Konstruktor niedomyślny:
    Samochod(std::string mark,std::string mod,int iloDrzw,double pojSiln,double sredSpal, std::string numRej);
//Settery:
    void setMarka(std::string nowaMarka);
    void setModel(std::string nowyModel);
    void setIloscDrzwi(int iloDrzwi);
    void setPojemnoscSilnika(double nowaPojemn);
    void setSrednieSpalanie(double sredSpal);
//Gettery:
    std::string getMarke();
    std::string getModel();
    int getIloscDrzwi();
    double getPojemnoscSilnika();
    double getSrednieSpalanie();
    int getLiczbeSamochodow();
    double getObliczSpalanie(double dystans);
//Pozostałe funkcje publiczne:
    double ObliczKosztPrzejazdu(double dlugoscTrasy, double cenaPaliwa);
    void WypiszInfo();

};


#endif //PROGRAMOWANIE_OBIEKTOWE_ZAD1_SAMOCHOD_H
