#pragma once
#include "Produs.h"

class Electrocasnic : public Produs
{
protected:
    std::string clasaEnergetica;
    unsigned greutate;
public:
    Electrocasnic(std::string newProducator = "", std::string newClasaEnergetica = "", unsigned newGreutate = 0);
    virtual ~Electrocasnic() = default;

    virtual void afisare();
    Electrocasnic operator+(unsigned newGreutate);
};


