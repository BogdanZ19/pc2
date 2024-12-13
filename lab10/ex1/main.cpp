#include <iostream>
#include "ContBancar.h"
#include "ContEconomii.h"
#include "Banca.h"

int ContBancar::nrInstante = 0;

int main()
{
    ContBancar c1;
    ContBancar c2(100.3, "123");
    
    double sold = !c2;

    std::cout << "Soldul contului " << c2.getNr() << " este " << sold << std::endl;
    c2-10;
    std::cout << "Dupa scadere c2 este: " << std::endl;
    c2.afisare();

    ContEconomii c3(100, "c3", 0.1);
    c3.afisare();
    c3.aplicareDobanda();
    c3.afisare();

    {
        Banca b;
        b.addCont(&c1);
        b.addCont(&c2);
        b.addCont(&c3);

        b.afisare();
        b.aplicareComision(0.1);
        b.afisare();

        std::cout << "sortare: " << std::endl;
        b.sort();
        b.afisare();
    }

    c3.afisare();

    std::cout << "nrInstante = " << ContBancar::getNrInstante() << std::endl;

    return 0;
}