#include <iostream>
#include <vector>
#include "Senzor.h"
#include "Termocuplu.h"
#include "Vehicul.h"

template <typename T>
T combine(T, double);

int main()
{
    Senzor s1;
    Senzor s2("unu", "barometru", 25.3);
    Senzor s3("doi", "barometru", 28);
    
    std::cout << "In acest moment exista " << Senzor::getContor() << " senzori" << std::endl << std::endl;

    Termocuplu tc1;
    Termocuplu tc2("trei", "termic", 34, 4.3, 19.3);
    Termocuplu tc3("patru", "termic", 36, 3, 18);
    Termocuplu tc4("cinici", "termic", 40, 1, 17);
    Termocuplu tc5("sase", "termic", 16, 7, 22);
    Termocuplu tc6("sapte", "termic", 19, 3, 20);
    Termocuplu tc7("opt", "termic", 23, 2, 19);

    s1.afisare();
    s2.afisare();

    std::cout << std::endl << tc1 << tc2 << tc3 << tc4 << tc5 << std::endl;

    std::cout << ((s2==s3)? "s2 = s3" : "s2 != s3") << std::endl << std::endl;


    std::vector<Termocuplu> v = {tc2, tc3, tc4, tc5};
    Vehicul vehicul1(4, v);
    
    vehicul1.rmEl(1);
    vehicul1.afisare();
    std::cout << std::endl;

    vehicul1.addEl(tc6);
    vehicul1.afisare();
    std::cout << std::endl;

    vehicul1.addEl(tc7);
    vehicul1.afisare();
    std::cout << std::endl;

    std::cout << std::endl << "Vectorul dupa sortare:" << std::endl;
    vehicul1.sortByName();
    vehicul1.afisare();

    double tempMed = vehicul1.tempMed();

    std::cout << "Temperatura medie este: " << tempMed << std::endl;

    Senzor s = combine(s2, 20);

    s.afisare();

    return 0;
}

template <typename T>
T combine(T x, double d)
{
    x.setPret(d);

    return x;
}
