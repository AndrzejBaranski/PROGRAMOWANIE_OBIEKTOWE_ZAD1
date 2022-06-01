//
// Created by allti on 01.06.2022.
//

#include "Samochod.h"
#include <iostream>



int Samochod::liczbaSamochodow=0;

Samochod::Samochod(){
    marka="nieznana";
    model="nieznany";
    iloscDrzwi=0;
    pojemnoscSilnika=0.0;
    srednieSpalanie=0.0;
}

Samochod::Samochod(std::string mark, std::string mod, int iloDrzw, double pojSiln, double sredSpal, std::string numRej) {
    marka = mark;
    model = mod;
    iloscDrzwi = iloDrzw;
    pojemnoscSilnika = pojSiln;
    srednieSpalanie = sredSpal;
    numerRejestracyjny = numRej;
    liczbaSamochodow++;
}

void Samochod::setMarka(std::string nowaMarka) {
    marka=nowaMarka;
}

void Samochod::setModel(std::string nowyModel) {
    model=nowyModel;
}

void Samochod::setIloscDrzwi(int iloDrzwi) {
    iloscDrzwi=iloDrzwi;
}

void Samochod::setPojemnoscSilnika(double nowaPojemn) {
    pojemnoscSilnika = nowaPojemn;
}

void Samochod::setSrednieSpalanie(double sredSpal) {
    srednieSpalanie = sredSpal;
}
//Gettery:
std::string Samochod::getMarke() {
    return std::string(marka);
}

std::string Samochod::getModel() {
    return std::string(model);
}

int Samochod::getIloscDrzwi() {
    return iloscDrzwi;
}

double Samochod::getPojemnoscSilnika() {
    return pojemnoscSilnika;
}
int Samochod::getLiczbeSamochodow() {
    return liczbaSamochodow;
}
double Samochod::getObliczSpalanie(double dystans){
    return (ObliczSpalanie(dystans));
}

double Samochod::getSrednieSpalanie() {
    return srednieSpalanie;
}

double Samochod::ObliczSpalanie(double dlugoscTrasy) {
    double spalanie = (srednieSpalanie*dlugoscTrasy)/100.0;
    return spalanie;
}

double Samochod::ObliczKosztPrzejazdu(double dlugoscTrasy, double cenaPaliwa) {
    double kosztPrzejazdu = ObliczSpalanie(dlugoscTrasy)*cenaPaliwa;
    return (kosztPrzejazdu);
}

void Samochod::WypiszInfo() {
    std::cout<<'\n'<<"================= Informacje o samochodach =================="<<'\n';
    std::cout<<"Marka samochodu : "<<marka<<'\n';
    std::cout<<"Model samochodu : "<<model<<'\n';
    std::cout<<"Ilość drzwi : "<<iloscDrzwi<<'\n';
    std::cout<<"Pojemność silnika : "<<pojemnoscSilnika<<'\n';
    std::cout<<"Średnie spalanie : "<<srednieSpalanie<<'\n';
    std::cout<<"Numer rejestracyjny : "<<numerRejestracyjny<<'\n';
    std::cout<<"------------------------------------------------------------------"<<'\n';

}
