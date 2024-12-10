#pragma once
#include "Gadget.h"

class Smartwatch : public Gadget
{
private:
    unsigned autonomie;
    static int contor;
public:
    Smartwatch(std::string newProducator = "", double newPretFaraTva = 0.0, unsigned newAutonomie = 0);
    ~Smartwatch();

    void afisare();
    bool operator<(Smartwatch);
    static int getContor();
};


