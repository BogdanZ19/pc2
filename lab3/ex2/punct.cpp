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

// Punct::~Punct()
// {
//     std::cout << "S-a apelat destructorul" << std::endl;
// }

void Punct:: Citire()
{
    std::cout << "x = ";
    std::cin >> x;
    std::cout << "y = ";
    std::cin >> y;
}

void Punct:: Afisare()
{
    std::cout << "(x, y) = (" << x << ", " << y << ")" << std::endl; 
} 

double Punct:: Dist()
{
    return sqrt(pow(x, 2) + pow(y, 2));

}

bool Punct:: Comp(Punct p)
{
    if(Dist() == p.Dist())
    {
        return 1;
    }

    else
        return 0;
}

Punct maxim(Punct a[], int n)
{
    Punct max = a[0];
    for(int i = 1; i < n; i++)
    {
        if(a[i].Dist() > max.Dist())
        {
            max = a[i];
        }
    }

    return max;
}
