#pragma once
#include <string>

class Electrocasnic
{
protected:
    std::string producator;
    double pretFaraTva;
public:
    Electrocasnic(std::string newProducator = "", double newPretFaraTva = 0.0);
    ~Electrocasnic();

    void afisare();
    void changePret(double);
};

