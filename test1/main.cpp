#include <iostream>
#include "ContBancar.h"
#include "Banca.h"

int main()
{
    ContBancar c1(1200, 2);
    ContBancar c2;

    c2.setSold(100.6);
    c2.setNr(5);

    std::cout << "c2:" << std::endl << c2 << std::endl;
    
    ContBancar c3 = c2-5.1;
    
    std::cout << c3 << std::endl;

    std::cout << "soldul contului c2 este: " << !c2 << std::endl;


    Banca b1;

    b1.addCont(1, 0);
    b1.addCont(2, 1);
    b1.addCont(3, 2);
    b1.afisareArr();

    //agregare
    //ContBancar c4[]={c1, c2};
    //Banca b2(c4);


    return 0;
}