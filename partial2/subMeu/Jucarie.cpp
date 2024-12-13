#include "Jucarie.h"
#include <iostream>
#include <utility>

Jucarie::Jucarie(std::string newNume, double newPret): nume(newNume), pret(newPret)
{
}

Jucarie::Jucarie(const Jucarie &j)
{
    nume = j.nume;
    pret = j.pret;
}

Jucarie::Jucarie(Jucarie &&j)
{
    nume = std::exchange(j.nume, "");
    pret = std::exchange(j.pret, 0.0);
}

void Jucarie::afisare()
{
    std::cout << "(nume, pret) = (" << nume << ", " << pret << ")" << std::endl;
}

Jucarie &Jucarie::operator=(const Jucarie &j)
{
    std::cout << "apel operator= de copiere" << std::endl;
    if(this == &j)
        return *this;
    nume = j.nume;
    pret = j.pret;    

    return *this;
}

Jucarie &Jucarie::operator=(Jucarie &&j)
{
    std::cout << "apel operator= de mutare" << std::endl;
    if(this == &j)
        return *this;
    nume = std::exchange(j.nume, "");
    pret = std::exchange(j.pret, 0.0);

    return *this;
}
