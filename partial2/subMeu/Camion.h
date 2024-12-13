#pragma once
#include "Jucarie.h"

class Camion : public Jucarie
{
protected:
    unsigned numarBaterii;
public:
    Camion(std::string newNume = "", double newPret = 0.0, unsigned newNumarBaterii = 0);
    //~Camion();

    void afisare();
    bool operator==(const Camion c);
};

