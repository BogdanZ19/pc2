#pragma once
#include <string>

class Gadget
{
protected:
    std::string producator;
    double pretFaraTva;
public:
    Gadget(std::string newProducator = "", double newPretFaraTva = 0.0);
    ~Gadget();

    void afisare();
    void changePret(double);
    
};


