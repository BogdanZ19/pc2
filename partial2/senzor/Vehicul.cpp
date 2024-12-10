#include "Vehicul.h"
#include <algorithm>
#include <vector>

Vehicul::Vehicul(unsigned newNrItems, std::vector<Termocuplu> newSenzoristica):
nrItems(newNrItems), senzoristica(newSenzoristica)
{
    nrItems = senzoristica.size();
}

void Vehicul::addEl(Termocuplu tc)
{
    senzoristica.push_back(tc);
    nrItems = senzoristica.size();
}


void Vehicul::rmEl(unsigned poz)
{
    senzoristica.erase(senzoristica.begin()+poz);
    nrItems = senzoristica.size();
}


void Vehicul::sortByName()
{
    std::sort(senzoristica.begin(), senzoristica.end());
}

void Vehicul::afisare()
{
    for(auto it = senzoristica.begin(); it != senzoristica.end(); it++)
    {
        std::cout << *it;
    }
    std::cout << std::endl;
}

double Vehicul::tempMed()
{
    double tempMedie = 0.0, sumaTemp = 0.0, tolerantaMedie = 0.0, sumaToleranta = 0.0, gradIncredere;
    for(auto it = senzoristica.begin(); it != senzoristica.end(); it++)
    {
        sumaTemp += (*it).getValoare();
        sumaToleranta += (*it).getToleranta();
    }
    tolerantaMedie = sumaToleranta / nrItems;
    gradIncredere = 100.0 - tolerantaMedie;

    tempMedie = sumaTemp / nrItems;

    std::cout << "gradIncredere = " << gradIncredere << std::endl;

    return tempMedie;
}
