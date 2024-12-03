#include "ContEconomii.h"
#include <iostream>

ContEconomii::ContEconomii(double newSold, std::string newNrCont, double newRataDobanda): 
ContBancar(newSold, newNrCont), 
rataDobanda(newRataDobanda)
{
}

void ContEconomii::aplicareDobanda()
{
    sold += sold * rataDobanda;
}

void ContEconomii::afisare()
{
    ContBancar::afisare();
    std::cout << "rata dobanda = " << rataDobanda << std::endl;
}
