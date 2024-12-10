#include <iostream>
#include "Produs.h"
#include "Electrocasnic.h"
#include "Aspirator.h"
#include <vector>
#include <memory>

int main()
{
    Produs p1;
    Produs p2("samsung");

    //sa verific daca e1 merge init asa si daca nu aveam = "" = "" la constr de initializare
    Electrocasnic e1;
    Electrocasnic e2("arctic", "A", 200);       
    Electrocasnic e3("lenovo", "D", 3);

    p1.afisare();
    p2.afisare();
    std::cout << std::endl;
    e1.afisare();
    e2.afisare();

    e2 + 20;
    std::cout << "e2 dupa schimbarea greutatii:" << std::endl;
    e2.afisare();

    Aspirator a1("karcher", "C", 5, 500);
    Aspirator a2("rowenta", "D", 4, 450);


    std::vector <Electrocasnic*> v;

    v.push_back(&e2);
    v.push_back(&e3);
    v.push_back(&a1);
    v.push_back(&a2);

    std::cout << std::endl << "Vectorul introdus: " << std::endl;    
    for(auto it = v.begin(); it != v.end(); it++)
    {
        (*it)->afisare();
        std::cout << std::endl;
    }

    std::cout << "Prezentare supraincarcare operator= pentru clasa Produs:" << std::endl;
    Produs p3;

    p1 = p2;
    p1.afisare();
    std::cout << std::endl;
    
    p3 = std::move(p1);
    p3.afisare();

    std::cout << std::endl;

    std::cout << "Prezentare utilizare pointer smart pentru clasa Produs:" << std::endl;

    std::shared_ptr<Produs> ptr1 = std::make_shared<Produs>("qwertykey");
    std::shared_ptr<Produs> ptr2 = ptr1;
    std::shared_ptr<Produs> ptr3 = ptr2;

    std::cout << "La acest moment exista " << ptr1.use_count() << " pointeri care folosesc adresa ptr1" << std::endl;

    
    std::unique_ptr<Produs> ptrk = std::make_unique<Produs>("qwerrtykey");
    (*ptr1).afisare();

    return 0;
}