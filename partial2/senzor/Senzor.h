#pragma once
#include <string>

class Senzor
{
protected:
    std::string nume;
    std::string tip;
    double pret;
    static int contor;
public:
    Senzor();
    Senzor(std::string newNume, std::string newTip, double newPret);
    ~Senzor();

    void afisare();
    double getPret();
    void setPret(double);
    static int getContor();
};

bool operator==(Senzor s1, Senzor s2);


