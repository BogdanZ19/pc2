#include "Electrocasnic.h"
#include <iostream>
Electrocasnic::Electrocasnic(std::string newProducator, double newPretFaraTva) : producator(newProducator), pretFaraTva(newPretFaraTva)
{
}

Electrocasnic::~Electrocasnic()
{
    std::cout << "S-a apelat dstructorul pt un electrocasnic" << std::endl;
}

void Electrocasnic::afisare()
{
    std::cout << "(producator, pretFaraTva) = (" << producator << ", " << pretFaraTva << ")" << std::endl;
}

void Electrocasnic::changePret(double newPret)
{
    pretFaraTva = newPret;
}
