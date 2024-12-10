#pragma once
#include <string>


class Jucarie
{
protected:
    std::string culoare;
    double pret;
public:
    Jucarie(std::string newCuloare = "", double newPret = 0.0);
    Jucarie(const Jucarie&);
    Jucarie(Jucarie&&);

    void afisare(); 
    Jucarie& operator=(const Jucarie &j);
    Jucarie& operator=(Jucarie &&j); 
};

