#pragma once
#include "Masina.h"

class Decapotabila: public Masina
{
private:
    unsigned numarPortiere;
public:
    Decapotabila(std::string newCuloare = "", double newPret = 0.0, unsigned newNumarBaterii = 0, unsigned newNumarPortiere = 0);
    //~Decapotabila();

    void afisare();
};

