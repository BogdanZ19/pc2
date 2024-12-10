#include "Produs.h"
#include <iostream>
#include <utility>

Produs::Produs(std::string newProducator): producator(newProducator)
{
}

Produs::Produs(const Produs &p)
{
    producator = p.producator;
}

Produs::Produs(Produs &&p)
{
    producator = std::exchange(p.producator, "");
}

void Produs::afisare()
{
    std::cout << "producator = " << producator << std::endl;
}

Produs &Produs::operator=(const Produs &p)
{
    std::cout << "operator= de copiere" << std::endl;
    if(this == &p)
        return *this;
    producator = p.producator;

    return *this;
}

Produs &Produs::operator=(Produs &&p)
{
    std::cout << "operator= de mutare" << std::endl;
    if(this == &p)
        return *this;
    producator = std::exchange(p.producator, "");

    return *this;
}
