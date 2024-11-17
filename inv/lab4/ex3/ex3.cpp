#include <iostream>
#include "autoturism.h"

int main()
{
    Autoturism a1;
    Autoturism a2("Rosie", 1999);
    Autoturism a3 = a2;
    Autoturism* a4 = &a3;

    std::cout << "Introduceti datele pentru a1:" << std::endl;
    std::cin >> a1;

    std::cout << a1 << a2 << a3 << *a4 << std::endl;

    a2.changeColor();

    std::cout << "noul a2: " << a2 << std::endl;

    std::cout << (a1.comparaAn(a2)? "a1 > a2" : "a2 > a1") << std::endl;

    return 0;
}