#include <iostream>
#include <algorithm>
#include <vector>
#include "Gadget.h"
#include "Smartphone.h"
#include "Smartwatch.h"


int main()
{
    Gadget g1;
    Gadget g2("samsung", 150.13);

    Smartphone s1;
    Smartphone s2("lenovo", 234.5, 6);
    Smartphone s3("alcatel", 50.2, 7);

    std::cout << "Gadget-uri: " << std::endl;
    g1.afisare();
    g2.afisare();
    std::cout << std::endl << "Smartphone-uri" << std::endl;
    s1.afisare();
    s2.afisare();

    std::cout << std::endl << "Dintre s2 si s3, ecranul mai mare il are: " << std::endl;
    (s2+s3).afisare();

    g2.changePret(215.3);
    std::cout << std::endl << "g2 dupa schimbarea pretului: " << std::endl;
    g2.afisare();

    Smartwatch a("samsung", 200.12, 12); 
    
    std::cout << "Nr de instante Smartwatch = " << Smartwatch::getContor() << std::endl;

    std::vector<Smartwatch> v = {Smartwatch("samsung", 200.12, 12), Smartwatch("apple", 700.2, 15), Smartwatch("google", 413.18, 14), Smartwatch("oppo", 524.23, 6)};
    
    std::cout << "Nr de instante Smartwatch = " << Smartwatch::getContor() << std::endl;
    
    std::sort(v.begin(), v.end());
    std::cout << "vectorul dupa sortare: " << std::endl;
    for(std::vector<Smartwatch>::iterator it = v.begin(); it != v.end(); it++)
    {
        (*it).afisare();
    }

    


    return 0;
}