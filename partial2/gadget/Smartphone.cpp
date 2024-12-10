#include "Smartphone.h"
#include <iostream>

Smartphone::Smartphone(std::string newProducator, double newPretFaraTva, unsigned newDiagonala) : 
Gadget(newProducator, newPretFaraTva), diagonala(newDiagonala)
{
    int contor = 0;
}

Smartphone::~Smartphone()
{
    std::cout << "Destructor Smartphone" << std::endl;
}

void Smartphone::afisare()
{
    Gadget::afisare();
    std::cout << "diagonala = " << diagonala << std::endl;
}

Smartphone Smartphone::operator+(const Smartphone s)
{
    if(diagonala > s.diagonala)
        return *this;
    return s;
}
