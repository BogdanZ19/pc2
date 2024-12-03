#include "ContBancar.h"
#include <iostream>
ContBancar::ContBancar(double newSold, std::string newNrCont): sold(newSold), NrCont(newNrCont)
{
    nrInstante++;
}

ContBancar::ContBancar(const ContBancar &c): sold(c.sold), NrCont(c.NrCont)
{
    nrInstante++;
}

ContBancar::~ContBancar()
{
    std::cout << "Destructor cont bancar " << NrCont << std::endl;
    nrInstante--;
}

double ContBancar::getSold()
{
    return sold;
}

void ContBancar::setSold(double newSold)
{
    sold = newSold;
}

std::string ContBancar::getNr()
{
    return NrCont;
}

void ContBancar::setStr(std::string newNrCont)
{
    NrCont = newNrCont;
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

void ContBancar::afisare()
{
    std::cout << "(sold, nrCont) = (" << sold << ", " << NrCont << ")" << std::endl;
}

int ContBancar::getNrInstante()
{
    return nrInstante;
}
