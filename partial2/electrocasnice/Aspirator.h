#pragma once
#include "Electrocasnic.h"

class Aspirator : public Electrocasnic
{
private:
    unsigned int putere;
public:
    Aspirator(std::string newProducator = "", double newPretFaraTva = 0.0, unsigned int newPutere = 0);
    
    void afisare();
    bool operator<(const Aspirator);
    bool operator>(const Aspirator);
    unsigned getPutere();
};

template <typename T>
T max(T a1, T a2)
{
    if(a1 > a2)
        return a1;
    return a2;
}


