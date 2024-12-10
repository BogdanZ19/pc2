#include "Smartwatch.h"
#include <iostream>

int Smartwatch::contor = 0;

Smartwatch::Smartwatch(std::string newProducator, double newPretFaraTva, unsigned newAutonomie) :
Gadget(newProducator, newPretFaraTva), autonomie(newAutonomie)
{
    contor++;
    std::cout << "Constructor smartwatch" << std::endl;
}

Smartwatch::~Smartwatch()
{
    contor--;
    std::cout << "Destructor smartwatch" << std::endl;
}

void Smartwatch::afisare()
{
    Gadget::afisare();
    std::cout << "autonomie = " << autonomie << std::endl;
}

bool Smartwatch::operator<(Smartwatch s)
{
    return pretFaraTva < s.pretFaraTva;
}

int Smartwatch::getContor()
{
    return contor;
}


