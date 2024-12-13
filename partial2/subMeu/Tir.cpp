#include "Tir.h"
#include "iostream"

Tir::Tir(std::string newNume, double newPret, unsigned newNumarBaterii, unsigned newNumarAxe):
Camion(newNume, newPret, newNumarBaterii), numarAxe(newNumarAxe)
{
}

void Tir::afisare()
{
    Camion::afisare();
    std::cout << "numarAxe = " << numarAxe;
}

bool Tir::operator<(Tir t)
{
    return numarAxe < t.numarAxe;
}
