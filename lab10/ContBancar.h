#pragma once
#include <string>

class ContBancar
{
protected:
    double sold;
    std::string NrCont;
    static int nrInstante;
public:
    ContBancar(double newSold = 0.0, std::string newNrCont = " ");
    ContBancar(const ContBancar&);
    ~ContBancar();
    double getSold();
    void setSold(double);
    std::string getNr();
    void setStr(std::string);

    double operator!();
    ContBancar operator-(double);
    void afisare();
    static int getNrInstante();
};


