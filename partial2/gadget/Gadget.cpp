#include "Gadget.h"
#include <iostream>

Gadget::Gadget(std::string newProducator, double newPretFaraTva) :
producator(newProducator),
pretFaraTva(newPretFaraTva)
{
}

Gadget::~Gadget()
{
    std::cout << "Destructor gadget" << std::endl;
}

void Gadget::afisare()
{
    std::cout << "(producator, pretFaraTva) = (" << producator << ", " << pretFaraTva << ")" << std::endl;   
}

void Gadget::changePret(double newPret)
{
    pretFaraTva = newPret;
}


