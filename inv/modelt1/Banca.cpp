#include "Banca.h"
#include <vector>

Banca::Banca(std::vector<ContBancar> c) : conturi(c)
{
}


void Banca::afisareVecotor()
{
    for(int i : conturi)
    {
        std::cout << i << " ";
    }
}

