#include <iostream>
#include <vector>
#include "Item.h"
#include "Weapon.h"
#include "Inventar.h"

template <typename T>
T combine(T x, double s);

int main()
{
    Item i1;
    Item i2("sabie", "atac", 1);
    Item i3("scut", "aparare", 2);

    Weapon w1;
    Weapon w2("sulita", "atac", 3, 20, 5.2);
   

    std::cout << "In acest moment exista " << Weapon::getCounter() << " arme" << std::endl;

    i1.afisare();
    i2.afisare();

    std::cout << std::endl;

    w1.afisare();
    w2.afisare();
    
    std::cout << std::endl;

    std::cout << "Demo op+: " << std::endl;
    Item i4 = i2 + i3;
    i4.afisare();
    
    std::cout << std::endl;

    std::vector<Weapon> v = {w2, Weapon("topor", "atac", 5, 23, 7.2)};
    
    Inventar inv(v.size(), v);
    inv.rmItem(0);
    inv.afisare();
    std::cout << std::endl;

    inv.addItem(Weapon("cutit", "atac", 5, 15, 0.5));
    inv.afisare();
    std::cout << std::endl;

    inv.addItem(Weapon("bata", "atac", 2, 18, 3));
    std::cout << std::endl;
    inv.afisare();

    std::cout << "Dps-ul total al inventarului este: " << inv.dpsTotal() << std::endl;

    Weapon w23 = combine<Weapon>(w2, 20.2);

    std::cout << std::endl;

    w23.afisare();

    return 0;
}

template <typename T>
T combine(T x, double s)
{
    x.setValue(x.getValue() + s);
    
    return x;
}
