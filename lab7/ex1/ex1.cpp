#include <iostream>
#include "automobil.h"

int Automobil::k = 0;

int main()
{
    Automobil a1;
   

    std::cin >> a1;
    std::cout << a1;

    std::cout << a1.k << std::endl;

    return 0;
}