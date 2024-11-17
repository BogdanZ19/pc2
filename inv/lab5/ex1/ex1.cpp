#include <iostream>
#include "complex.h"

int main()
{
    Complex c1(1, 2), c2(3, 4), c3;

    c3 = c1 + c2;

    std::cout << c3;
    std::cout << !c3 << std::endl;
    std::cout << c2-c1 << std::endl;
    std::cout << Complex(1, 4) * Complex(5, 1) << std::endl;

    return 0;
}