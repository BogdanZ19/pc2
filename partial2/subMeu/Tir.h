#pragma once
#include "Camion.h"

class Tir: public Camion
{
private:
    unsigned numarAxe;
public:
    Tir(std::string newNume = "", double newPret = 0.0, unsigned newNumarBaterii = 0, unsigned newNumarAxe = 0);
    //~Tir();

    void afisare();
    bool operator<(Tir);
};

