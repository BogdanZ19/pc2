#include "Electrocasnic.h"
#include <iostream>

Electrocasnic::Electrocasnic(std::string newProducator, std::string newClasaEnergetica, unsigned newGreutate):
Produs(newProducator), clasaEnergetica(newClasaEnergetica), greutate(newGreutate)
{
}

void Electrocasnic::afisare()
{
    Produs::afisare();
    std::cout << "(clasaEnergetica, greutate) = (" << clasaEnergetica << ", " << greutate << ")" << std::endl;
}

Electrocasnic Electrocasnic::operator+(unsigned newGreutate)
{
    greutate = newGreutate;

    return *this;
}
