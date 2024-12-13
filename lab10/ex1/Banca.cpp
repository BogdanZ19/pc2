#include "Banca.h"
#include <iostream>
#include <algorithm>

Banca::~Banca()
{
    std::cout << "Destructor Banca" << std::endl;
}

void Banca::addCont(ContBancar *c)
{
    conturi.push_back(c);
    nrConturi = conturi.size();
}

void Banca::afisare()
{
    for(auto it = conturi.begin(); it != conturi.end(); it++)
    {
        (*it)->afisare();
    }
}

void Banca::aplicareComision(double comision)
{
    for(int i = 0; i < nrConturi; i++)
    {
        ContBancar* c = conturi[i];
        *c - !(*c)*comision;
    }
}

bool Comp(ContBancar* c1, ContBancar* c2)
{
    //return c1->getSold() > c2->getSold();
    return c1->getNr() > c2->getNr();
}
void Banca::sort()
{
    std::sort(conturi.begin(), conturi.end(), Comp);
}
