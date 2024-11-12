#include <iostream>
#include "autoturism.h"

int Autoturism::k = 0;

int main()
{
    Roata r1[4] = {Roata(9u), Roata(17u), Roata(23u), Roata(45u)};
    Autoturism a1(5, 8.4, r1), a2;

    std::cin >> a2;
    std::cout << std::endl << "a1:" << std::endl << a1 << std::endl;
    std::cout << "a2:" << std::endl << a2 << std::endl;
    std::cout << Autoturism::k << std::endl;
    return 0;
}