#include "Autoturism.h"
#include <iostream>
#include <cstring>
int main()
{
    Autoturism a1;
    Autoturism a2("Rosie", 1999);
    Autoturism a3 = a2;
    Autoturism *a4 = &a3;
    Autoturism a5("Gri", 2020);
    
    a1.afisare();
    a2.afisare();
    a3.afisare();
    a4->afisare();
    a2.schimbareCuloare("Portocalie");
    a2.afisare();
    
    std::cout << a2.comparaAn(a5) << std::endl;

    return 0;
}