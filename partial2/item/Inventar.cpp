#include "Inventar.h"
#include <vector>
#include <algorithm>


Inventar::Inventar(unsigned newNrItems, std::vector<Weapon> newV):
nrItems(newNrItems), v(newV)
{
    nrItems = v.size();
}

void Inventar::addItem(Weapon w)
{
    v.push_back(w);
    nrItems = v.size();
}

void Inventar::rmItem(int poz)
{
    v.erase(v.begin() + poz);
    nrItems = v.size();
}


bool sortByName(Weapon w1, Weapon w2)
{
    return w1.getNume() < w2.getNume();
}

std::vector<Weapon> Inventar::sortByName()
{
    std::sort((*this).v.begin(), (*this).v.end());

    return (*this).v;
}

void Inventar::afisare()
{
    std::cout << "Inventarul dumneavoastra are " << nrItems << " item/e: " << std::endl;
    for(auto it = v.begin(); it != v.end(); it++)
    {
        std::cout << *it << std::endl;
    }
}

double Inventar::dpsTotal()
{
    double dpsT = 0.0;
    for(auto it = v.begin(); it != v.end(); it++)
    {
        dpsT += (*it).calculDps();
    }

    return dpsT;
}
