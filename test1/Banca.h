#pragma once
#include "ContBancar.h"

class Banca
{
private:
    ContBancar cont[5];
    unsigned n = 0;
public:
    void addCont(int, unsigned);
    void afisareArr();
};


