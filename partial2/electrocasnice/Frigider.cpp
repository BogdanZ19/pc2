#include "Frigider.h"
#include <iostream>
#include <utility>

Frigider::Frigider(std::string newProducator, double newPretFaraTva, unsigned int newVolum) : Electrocasnic(newProducator, newPretFaraTva), volum(newVolum)
{
}

Frigider::Frigider(const Frigider &deCopiat)
{
    producator = deCopiat.producator;
    pretFaraTva = deCopiat.pretFaraTva;
    volum = deCopiat.volum;
}

Frigider::Frigider(Frigider &&deMutat)
{
    producator = deMutat.producator;
    pretFaraTva = deMutat.pretFaraTva;
    volum = deMutat.volum;

    deMutat.producator = "";
    deMutat.pretFaraTva = 0;
    deMutat.volum = 0;
}

Frigider::~Frigider()
{
    std::cout << "S-a apelat dstructorul pt un frigider" << std::endl;
}


void Frigider::afisare()
{
    Electrocasnic::afisare();
    std::cout << "volum = " << volum << std::endl;
}

void Frigider::operator!()
{
    pretFaraTva += 100;
}

Frigider &Frigider::operator=(const Frigider &f1)
{
    std::cout << "Operator = de copiere" << std::endl;

    if(this == &f1)
        return *this;
    producator = f1.producator;
    pretFaraTva = f1.pretFaraTva;
    volum = f1.volum;

    return *this;
}

Frigider &Frigider::operator=(Frigider &&f1)
{
    std::cout << "Operator = de mutare" << std::endl;

    if(this == &f1)
        return *this;
    producator = std::exchange(f1.producator, "");
    pretFaraTva = std::exchange(f1.pretFaraTva, 0);
    volum = std::exchange(f1.volum, 0);

    return *this;
}

