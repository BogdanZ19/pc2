#include <iostream>
#include "Jucarie.h"
#include "Camion.h"
#include "Tir.h"
#include <vector>
#include <algorithm>
#include <memory>

int main()
{
    Jucarie j1;
    Jucarie j2("avion", 23.2);
    Jucarie j3;

    Camion c1;
    Camion c2("camion2", 27.3, 4);
    Camion c3("camion2", 29.2, 2);
    Camion c4("camion3", 30.5, 2);

    j1.afisare();
    j2.afisare();

    std::cout << std::endl;

    c1.afisare();
    c2.afisare();

    std::cout << std::endl;

    std::cout << "Demonstrare supraincarcare operator binar:" << std::endl;
    std::cout << (c2==c3? "c2 are acelasi nume cu c3" : "c2 nu are acelasi nume cu c3") << std::endl;
    std::cout << (c2==c4? "c2 are acelasi nume cu c4" : "c2 nu are acelasi nume cu c4") << std::endl;

    std::cout << std::endl << "Demonstrare utilizare vector: " << std::endl;
    Tir t1("tir1", 28, 3, 12);
    Tir t2("tir2", 23, 4, 3);
    Tir t3("tir3", 34, 2, 24);
    Tir t4("tir4", 32, 6, 15);
    
    
    std::vector<Tir> v;
    v.push_back(t1);
    v.push_back(t2);
    v.push_back(t3);
    v.push_back(t4);

    std::sort(v.begin(), v.end());

    for(auto it = v.begin(); it!= v.end(); it++)
    {
        (*it).afisare();
        std::cout << std::endl;
    }
    std::cout << std::endl; 
    std::cout << "demo operator= de copiere:" << std::endl;
    j1 = j2;
    j1.afisare();
    j2.afisare();
    std::cout << "demo operator= de mutare:" << std::endl;
    j3 = std::move(j2);
    j3.afisare();
    j2.afisare();

    std::shared_ptr<Jucarie> ptrj1 = std::make_shared<Jucarie>("avion", 23.2);
    std::shared_ptr<Jucarie> ptrj2 = ptrj1;
    std::shared_ptr<Jucarie> ptrj3 = ptrj2;

    std::cout << "La momentul actual exista " << ptrj1.use_count() << " pointeri la acelasi obiect" << std::endl;



    return 0;
}