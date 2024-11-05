#include <iostream>
#include "punct.h"

int main()
{
    //Punct p(3, 4);
    Punct *p = new Punct(3, 4);
    Punct p2 = Punct(4, 5);
    Punct vp[20], max;

    int n = 3;


    std:: cout << "Introduceti un pct in spatiu" << std::endl;
    p->Citire();
    p->Afisare();

    std::cout << "Distanta de la punct la origine este: " << p->Dist() << std::endl;
    
    if(p->Comp(p2))
    {
        std::cout << "Punctele au distanta egala fata de origine"<< std::endl;
    }
    else
    {
        std::cout << "Punctele au distanta diferita fata de origine" << std::endl;
    }



    std::cout << "Introduceti punctele de comparat:" << std::endl;
    for(int i = 0; i < n; i++)
    {   
        std::cout << "v[" << i << "]:" << std::endl;
        vp[i].Citire();
    }
    max = maxim(vp, n);
    
    std:: cout<< "Punctul cu distanta maxima este: ";
    max.Afisare();

    

    delete p;
    return 0;
}