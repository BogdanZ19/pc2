#include <iostream>
#include "matrice.h"
int main()
{
    Matrice m1, m2, m3;
    
    m1.citire();
    m2.citire();

    std::cout << m1 << std::endl << m2 << std::endl;

    m3 = m1 + m2;
    m3.afisare();

    m3 = m1*m2;
    m3.afisare();
//cin/cout se pot supraincarca doar cu friend
//overloading << operator
    if(m1==m2)
    {
        std::cout << "Sunt egale" << std::endl;
    }
    else
    {
        std::cout << "Nu sunt egale" << std::endl;
    }

    std::cout << m1++ << m1; 
    std::cout << std::endl << m1[0] << std::endl;
    std::cout << ++m1 << m1 << std::endl; 
    std::cout << "mInv:" << std::endl << ~m1 << std::endl;
 
    return 0;
}