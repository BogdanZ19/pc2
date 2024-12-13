#include "Camion.h"
#include <iostream>

Camion::Camion(std::string newNume, double newPret, unsigned newNumarBaterii):
Jucarie(newNume, newPret), numarBaterii(newNumarBaterii)
{
}

void Camion::afisare()
{
    Jucarie::afisare();
    std::cout << "numarBaterii = " << numarBaterii << std::endl;
}

bool Camion::operator==(const Camion c)
{
    return nume == c.nume;
}
