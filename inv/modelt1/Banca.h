#pragma once
#include "ContBancar.h"
#include <iostream>
#include <vector>
class Banca
{
private:
    std::vector <ContBancar> conturi;
public:
    Banca(std::vector <ContBancar> c = {});
    
    void afisareVecotor();
};

