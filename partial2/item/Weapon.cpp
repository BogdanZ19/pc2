#include "Weapon.h"
#include <iostream>

int Weapon::counter = 0;

Weapon::Weapon() : Item(), damage(0), weight(0.0)
{
    counter++;
}

Weapon::Weapon(std::string newNume, std::string newType, double newValue, unsigned newDamage, double newWeight):
Item(newNume, newType, newValue), damage(newDamage), weight(newWeight)
{
    counter++;
}

Weapon::~Weapon()
{
    counter--;
}

void Weapon::afisare()
{
    Item::afisare();
    std::cout << "(damage, weight) = (" << damage << ", " << weight << ")" << std::endl;
}

double Weapon::calculDps()
{
    return damage / 2.5;
}

bool Weapon::operator<(Weapon w)
{
    return nume < w.nume;
}

int Weapon::getCounter()
{
    return counter;
}

std::ostream &operator<<(std::ostream &stream, Weapon w)
{
    w.afisare();

    return stream;
}
