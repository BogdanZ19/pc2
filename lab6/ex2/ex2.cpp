#include <iostream>
#include "multime.h"

int main()
{
    int v[] = {1, 2, 3, 4};
    Multime g(4, v);
    
    g.afisare();

    Multime m = g;
    m.afisare();

    Multime m2 = m+g;
    m2.afisare();

    int k = !m2;
    std::cout << "k este: " << k << std::endl;
    return 0;
}