#include "Aspirator.h"
#include <iostream>

Aspirator::Aspirator(std::string newProducator, double newPretFaraTva, unsigned int newPutere) : Electrocasnic(newProducator, newPretFaraTva), putere(newPutere)
{
}

void Aspirator::afisare()
{
    Electrocasnic::afisare();
    std::cout << "putere = " << putere << std::endl;
}

bool Aspirator::operator<(const Aspirator a)
{
    return putere < a.putere;
}

bool Aspirator::operator>(const Aspirator a)
{
    return putere > a.putere;
}

unsigned Aspirator::getPutere()
{
    return putere;
}
