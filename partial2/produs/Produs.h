#pragma once
#include <string>

class Produs
{
protected:
    std::string producator;
public:
    Produs(std::string newProducator = "");
    Produs(const Produs& p);
    Produs(Produs&& p);
    //~Produs();

    void afisare();
    Produs& operator=(const Produs& p);
    Produs& operator=(Produs&& p);
};


