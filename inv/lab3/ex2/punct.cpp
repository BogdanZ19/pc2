#include "punct.h"
#include <iostream>
#include <cmath>

Punct:: Punct()
{
    x = 0;
    y = 0;
}

Punct:: Punct(int x, int y) : x(x), y(y)
{    
}

void Punct:: Citire()
{
    std::cout<<"x = ";
    std::cin >> x;
    std::cout<<"y = ";
    std::cin >> y;
}

void Punct:: Afisare()
{
    std::cout<<"(x,y) = (" << x << "," << y << ")" << std::endl;
}

double Punct:: Dist()
{
    return sqrt(pow(x,2) + pow(y,2));
}