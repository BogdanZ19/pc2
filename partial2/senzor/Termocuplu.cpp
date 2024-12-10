#include "Termocuplu.h"
#include <iostream>

Termocuplu::Termocuplu(): Senzor(), toleranta(0.0), valoare(0.0)
{
}

Termocuplu::Termocuplu(std::string newNume, std::string newTip, double newPret, double newToleranta, double newValoare):
Senzor(newNume, newTip, newPret), toleranta(newToleranta), valoare(newValoare)
{
}

void Termocuplu::afisare()
{
    Senzor::afisare();
    std::cout << "(toleranta, valoare) = (" << toleranta << ", " << valoare << ")" << std::endl;
}

double Termocuplu::getToleranta()
{
    return toleranta;
}

double Termocuplu::getValoare()
{
    return valoare;
}

bool Termocuplu::operator<(Termocuplu tc)
{
    return nume < tc.nume;
}

std::ostream &operator<<(std::ostream &stream, Termocuplu t)
{
    t.afisare();

    return stream;
}

