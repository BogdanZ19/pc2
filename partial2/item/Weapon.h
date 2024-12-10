#pragma once
#include "Item.h"
#include <iostream>

class Weapon : public Item
{
private:
    unsigned damage;
    double weight;
    static int counter;
public:
    Weapon();
    Weapon(std::string newNume, std::string newType, double newValue, unsigned newDamage, double newWeight);
    ~Weapon();

    void afisare();
    double calculDps();
    friend std::ostream& operator<<(std::ostream& stream, Weapon w);
    bool operator<(Weapon w);
    static int getCounter();
};

