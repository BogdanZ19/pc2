#include "persoana.h"
#include <iostream>

int main()
{
    Persoana p1((char *)"Pavel", 22);
    Persoana p2((char *)"Ana", 43);
    

    p1.afiseaza();
    p2.afiseaza();

    std::cout << p1.compara(p2) << std::endl;
    Persoana p3 = std::move(p2);
   

    p3.afiseaza();
    p2.afiseaza();
  
    return 0;
}