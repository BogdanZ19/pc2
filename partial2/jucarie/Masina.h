#pragma once
#include "Jucarie.h"

class Masina : public Jucarie
{
protected:
    unsigned numarBaterii;
public:
    Masina(std::string newCuloare = "", double newPret = 0.0, unsigned newNumarBaterii = 0);
    virtual ~Masina() = default;

    virtual void afisare();
    bool operator==(const Masina m1);
};


