#include <iostream>
#include "Jucarie.h"
#include "Masina.h"
#include "Decapotabila.h"
#include <vector>
#include <memory>

int main()
{
    Jucarie j1;
    Jucarie j2("galben", 13.5);
    Jucarie j3;

    Masina m1;
    Masina m2("verde", 15, 2);
    Masina m3("gri", 20, 1);

    Decapotabila d1("albastru", 23, 3, 2);
    Decapotabila d2("portocaliu", 25, 4, 4);

    j1.afisare();
    j2.afisare();

    std::cout << std::endl;

    m1.afisare();
    m2.afisare();

    std::cout << (m2==m3? "masinile au aceeasi culoare" : "masinile au culori diferite") << std::endl << std::endl;

    std::vector<Masina*> v;

    v.push_back(&m2);
    v.push_back(&m3);
    v.push_back(&d1);
    v.push_back(&d2);


    for(auto it = v.begin(); it != v.end(); it++)
    {
        (*it)->afisare();
        std::cout << std::endl;
    }
    std::cout << std::endl;

    std::cout<<"Testare operator= :" << std::endl;
    j1 = j2;
    j1.afisare();
    j3 = std::move(j1);
    j3.afisare();

    std::shared_ptr<Jucarie> ptr1 = std::make_shared<Jucarie>("roz", 5);
    std::shared_ptr<Jucarie> ptr2 = ptr1;
    std::shared_ptr<Jucarie> ptr3 = ptr2;

    std::cout << "La momentul actual exista " << ptr1.use_count() << " pointeri la jucaria roz" << std::endl;

    return 0;
}