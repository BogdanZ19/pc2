#pragma once
#include "Electrocasnic.h"

class Aspirator : public Electrocasnic
{
private:
    unsigned putere;
public:
    Aspirator(std::string newProducator = "", std::string newClasaEnergetica = "", unsigned newGreutate = 0, unsigned newPutere = 0);
    //~Aspirator();

    void afisare();
};

