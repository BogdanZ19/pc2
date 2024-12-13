#pragma once
#include "ContBancar.h"
#include <vector>


class Banca
{
private:
    std::vector<ContBancar*> conturi;
    unsigned int nrConturi;
public:
    ~Banca();
    void addCont(ContBancar*);
    void afisare();
    void aplicareComision(double);
    void sort();
};


