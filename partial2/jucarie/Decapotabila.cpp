#include "Decapotabila.h"
#include <iostream>

Decapotabila::Decapotabila(std::string newCuloare, double newPret, unsigned newNumarBaterii, unsigned newNumarPortiere):
Masina(newCuloare, newPret, newNumarBaterii), numarPortiere(newNumarPortiere)
{
}

void Decapotabila::afisare()
{
    Masina::afisare();
    std::cout << "numar portiere = " << numarPortiere << std::endl;
}
