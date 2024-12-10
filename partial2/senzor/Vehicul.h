#pragma once
#include "Termocuplu.h"
#include <vector>

class Vehicul
{
private:
    unsigned nrItems;
    std::vector<Termocuplu> senzoristica;
public:
    Vehicul(unsigned newNrItems = 0, std::vector<Termocuplu> newSenzoristica = {});
    //~Vehicul();

    void addEl(Termocuplu);
    void rmEl(unsigned poz);
    void sortByName();
    void afisare();
    double tempMed();
};

