#include "automobil.h"

Automobil::Automobil(unsigned int newCapacitate, double newConsum): capacitate(newCapacitate), consum(newConsum)
{
    k++;
}

Automobil::~Automobil()
{
    k--;
}

std::ostream &operator<<(std::ostream &stream, const Automobil &a)
{
    stream << "Capacitatea = " << a.capacitate << "Consum = " << a.consum << std::endl;
    
    return stream;
}

std::istream &operator>>(std::istream &stream, Automobil& a)
{
    std::cout << "Introduceti datele pentru noul autoturism:" << std::endl;
    std::cout << "Capacitatea = ";
    stream >> a.capacitate;
    std::cout << "Consum = ";
    stream >> a.consum;

    return stream;
}
