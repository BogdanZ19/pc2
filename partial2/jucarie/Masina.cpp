#include "Masina.h"
#include <iostream>

Masina::Masina(std::string newCuloare, double newPret, unsigned newNumarBaterii):
Jucarie(newCuloare, newPret), numarBaterii(newNumarBaterii)
{
}

void Masina::afisare()
{
    Jucarie::afisare();
    std::cout << "numarBaterii = " << numarBaterii << std::endl;
}

bool Masina::operator==(const Masina m1)
{
    return culoare == m1.culoare;
}
