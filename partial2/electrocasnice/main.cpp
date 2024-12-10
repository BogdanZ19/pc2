#include <iostream>
#include <vector>
#include <algorithm>
#include "Electrocasnic.h"
#include "Frigider.h"
#include "Aspirator.h"
#include <memory>

int main()
{
    Electrocasnic e1;
    Electrocasnic e2("sony", 25.6);

    e1.afisare();
    e2.afisare();
    std::cout << std::endl;

    Frigider f1;
    Frigider f2("arctic", 500.3, 200);
    Frigider f3("samsung", 780, 150);

    f1.afisare();
    f2.afisare();
    std::cout << std::endl;

    !f2;

    std::cout << "F2 dupa marirea pretului: " << std::endl;
    f2.afisare();
    std::cout << std::endl;

    f2.changePret(50.2);
    std::cout << "F2 dupa schimbarea pretului: " << std::endl;
    f2.afisare();
    std::cout << std::endl;

    Aspirator a1("pixar", 500.12, 470), a2("karcher", 300.15, 500);
    std::vector<Aspirator> v1 = {Aspirator ("pixar", 500.12, 470), Aspirator("karcher", 300.15, 500), Aspirator("rowenta", 640.23, 370), Aspirator("lenovo", 700.15, 230)};
    std::sort(v1.begin(), v1.end());
    
    std::cout << std::endl << "Vectorul dupa sortare: " << std::endl;
    for(auto it = v1.begin(); it != v1.end(); it++)
    {
        (*it).afisare();
    }
    
    std::cout << "Maximul dintre a1 si a2 este: " << std::endl;
    max<Aspirator>(a1,a2).afisare();

    f2 = f3;

    f2.afisare();

    f1 = std::move(f2);
    f1.afisare();

    std::unique_ptr<Electrocasnic> e3 = std::make_unique<Electrocasnic> ("lenovo", 320);
    (*e3).afisare(); 
    

    return 0;
}

