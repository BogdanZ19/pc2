#include "Aspirator.h"
#include <iostream>

Aspirator::Aspirator(std::string newProducator, std::string newClasaEnergetica, unsigned newGreutate, unsigned newPutere):
Electrocasnic(newProducator, newClasaEnergetica, newGreutate), putere(newPutere) 
{
}

void Aspirator::afisare()
{
    Electrocasnic::afisare();
    std::cout << "putere = " << putere << std::endl;
}
