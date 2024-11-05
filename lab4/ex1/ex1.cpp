#include "complex.h"
#include <iostream>

int main()
{
    Complex c1(5, 3);
    Complex c2(2, -3);
    Complex c3 = c1.aduna(c2); //Complex c3(c1.aduna(c2))
    //c3 = c1.aduna(c2);  //c3.operator=(c1.aduna(c2))
    Complex c4 = std::move(c2);

    c1.afisare();
    c2.afisare();
    c3.afisare();
}