#include "Senzor.h"
#include <iostream>

int Senzor::contor = 0;

Senzor::Senzor(): nume(""), tip(""), pret(0.0)
{
    contor++;
}

Senzor::Senzor(std::string newNume, std::string newTip, double newPret):
nume(newNume), tip(newTip), pret(newPret)
{
    contor++;
}

Senzor::~Senzor()
{
    contor--;
}

void Senzor::afisare()
{
    std::cout << "(nume, tip, pret) = (" << nume << ", " << tip << ", " << pret << ")" << std::endl;
}

double Senzor::getPret()
{
    return pret;
}

void Senzor::setPret(double d)
{
    pret = d;
}

int Senzor::getContor()
{
    return contor;
}

bool operator==(Senzor s1, Senzor s2)
{
    return (s1.getPret() == s2.getPret());
}
