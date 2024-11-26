#include "ContBancar.h"
#include <iostream>

ContBancar::ContBancar(double s, int nrC) : sold(s), numarCont(nrC)
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

void ContBancar::setNr(int nr)
{
    numarCont = nr;
}

int ContBancar::getNr()
{
    return numarCont;
}

double ContBancar::operator!()
{
    return sold;
}

ContBancar ContBancar::operator-(double s)
{
    ContBancar rez;
    rez.sold -= s;

    return rez;
}

std::ostream &operator<<(std::ostream &stream, const ContBancar c)
{
    stream << "sold = " << c.sold << std::endl << "numarCont = " << c.numarCont << std::endl;

    return stream;
}

// std::istream &operator>>(std::istream &stream, ContBancar &c)
// {
//     std::cout << "sold = ";
//     stream >> c.sold;
//     std::cout << "nrCont = ";
//     stream >> c.numarCont;

//     return stream;
// }
