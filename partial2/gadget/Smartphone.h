#pragma once
#include "Gadget.h"

class Smartphone : public Gadget
{
private:
    unsigned diagonala;
public:
    Smartphone(std::string newProducator = "", double newPretFaraTva = 0.0, unsigned newDiagonala = 0);
    ~Smartphone();

    void afisare();
    Smartphone operator+(const Smartphone);
    
};

