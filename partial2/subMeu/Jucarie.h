#pragma once
#include <string>    

class Jucarie
{
protected:
    std::string nume;
    double pret;
public:
    Jucarie(std::string newNume = "", double newPret = 0.0);
    Jucarie(const Jucarie&);
    Jucarie(Jucarie&&);

    void afisare();
    Jucarie& operator=(const Jucarie&);
    Jucarie& operator=(Jucarie&&);
};

