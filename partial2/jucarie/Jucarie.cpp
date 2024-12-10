#include "Jucarie.h"
#include <iostream>
#include <utility>

Jucarie::Jucarie(std::string newCuloare, double newPret):
culoare(newCuloare),
pret(newPret)
{
}

Jucarie::Jucarie(const Jucarie &j)
{
    culoare = j.culoare;
    pret = j.pret;
}

Jucarie::Jucarie(Jucarie &&j)
{
    culoare = std::exchange(j.culoare, "");
    pret = std::exchange(j.pret, 0.0);
}

void Jucarie::afisare()
{
    std::cout << "(culoare, pret) = (" << culoare << ", " << pret << ")" << std::endl;                          
}

Jucarie &Jucarie::operator=(Jucarie &j)
{
    std::cout << "Operator egal de copiere" << std::endl;
    if(this == &j)
        return *this;
    culoare = j.culoare;
    pret = j.pret;
    return *this;
}

Jucarie &Jucarie::operator=(Jucarie &&j)
{
    std::cout << "Operator egal de mutare" << std::endl;
    if(this == &j)
        return *this;

    culoare = std::exchange(j.culoare, "");
    pret = std::exchange(j.pret, 0.0);

    return *this;
}
