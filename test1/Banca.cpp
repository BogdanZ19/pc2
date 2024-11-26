#include "Banca.h"
#include <iostream>

void Banca::addCont(int val, unsigned poz)
{
    cont[poz].setNr(val);
    n++;
}

void Banca::afisareArr()
{
    for(unsigned i = 0; i < n; i++)
    {
        std::cout << cont[i].getNr() << " ";   
    }
    std::cout << std::endl;
}
