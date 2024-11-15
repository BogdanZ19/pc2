#include "complex.h"

int main()
{
    Complex c1(5, 3);
    Complex c2(2, -3);
    Complex c3 = c1.aduna(c2);

    c1.afisare();
    c2.afisare();
    c3.afisare();

    return 0;
}