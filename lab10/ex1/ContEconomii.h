#pragma once
#include "ContBancar.h"


class ContEconomii:public ContBancar
{
private:
    double rataDobanda;
public:
    ContEconomii(double newSold = 0.0, std::string newNrCont = " ", double newRataDobanda = 0);
    void aplicareDobanda();
    void afisare();
};


