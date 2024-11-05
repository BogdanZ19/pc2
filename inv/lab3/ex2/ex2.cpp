#include <iostream>
#include "punct.h"

int main()
{
    Punct p1;

    p1.Citire();
    p1.Afisare();

    std::cout << "Distanta de la p1 la origine este: " << p1.Dist() <<std::endl;


    
    return 0;
}