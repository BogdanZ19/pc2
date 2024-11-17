#include "ContBancar.h"
#include <iostream>
#include <cstring>

ContBancar::ContBancar(double s, std::string ib) : sold(s), iban(ib)
{
}

void ContBancar::setSold(double s)
{
    sold = s;
}

double ContBancar::getSold()
{
    return sold;
}
void ContBancar::setIban(std::string ib)
{
    iban = ib;
}
std::string ContBancar::getIban()
{
    return iban;
}

double ContBancar::operator!()
{
    return sold;
}

ContBancar ContBancar::operator-(double s)
{
    sold -= s;

    return *this;
}

std::ostream &operator<<(std::ostream &stream, ContBancar c)
{
    stream << "(sold, iban) = (" << c.sold << ", " << c.iban << ")" << std::endl; 
        
    return stream;
}

std::istream &operator>>(std::istream &stream, ContBancar& c)
{
    std::cout << "sold = ";
    stream >> c.sold;
    std::cout << "iban = ";
    stream >> c.iban;

    return stream;
}



