#pragma once
#include "Senzor.h"
#include <iostream>
#include <string>

class Termocuplu : public Senzor
{
private:
    double toleranta;
    double valoare;
public:
    Termocuplu();
    Termocuplu(std::string newNume, std::string newTip, double newPret, double newToleranta, double newValoare);
    //~Termocuplu();

    void afisare();
    double getToleranta();
    double getValoare();
    friend std::ostream& operator<<(std::ostream& stream, Termocuplu t);
    bool operator<(Termocuplu tc);
};

