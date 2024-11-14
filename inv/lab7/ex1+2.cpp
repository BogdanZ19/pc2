#include <iostream>
#include "autoturism.h"

int Autoturism::k = 0;

int main()
{
    Roata r1[4] = {Roata(15u), Roata(17u), Roata(18u), Roata(19u)};
    Autoturism a1(3, 4.5, r1), a2;

    std::cin >> a2;
    std::cout << std::endl << "a1 = " << a1 << std::endl;
    std::cout << "a2 = " << a2 << std::endl << std::endl;

    std::cout << Autoturism::k << std::endl;

    return 0;
}