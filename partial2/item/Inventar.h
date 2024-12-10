#pragma once
#include <vector>
#include "Weapon.h"

class Inventar
{
private:
    unsigned nrItems;
    std::vector<Weapon> v;

public:
    Inventar(unsigned newNrItems = 0, std::vector<Weapon> newV = {});
    
    void addItem(Weapon w);
    void rmItem(int poz);
    std::vector<Weapon> sortByName();
    void afisare();
    double dpsTotal();
};


