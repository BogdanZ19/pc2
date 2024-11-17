#include <iostream>
#include "ContBancar.h"
#include <cstring>

int main()
{
    ContBancar c1, c2(506.8, "RO123");

    std::cin >> c1;
    std::cout << c1 << c2;

    std::cout << !c1 << std::endl;

    return 0;
}