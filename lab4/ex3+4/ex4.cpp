#include "Autoturism.h"
#include <iostream>


int main()
{
    int n, k = 0, maxIdx = 0;
    Autoturism arr[20];

    std::cout << "n = ";
    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        std::cout << "Masina "<< i << ":" << std::endl;
        arr[i].citire();
    }

    for(int i = 0; i < n; i++)
    {
        std::cout << "Masina "<< i << ":" << std::endl;
        arr[i].afisare();
    }
    
    for(int i = 1; i < n; i++)
    {
        if(arr[i].comparaAn(arr[maxIdx]))
            maxIdx = i;
    }

    arr[maxIdx].afisare();

    return 0;
}