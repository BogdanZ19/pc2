#include <iostream>
#include "functii.h"


int main()
{
    double v[14] = {5.19, 4.78, 15.34, 23.12};

    sortare(v, 4);

    for(int i = 0; i < 4; i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}
