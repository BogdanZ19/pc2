#include "Item.h"
#include <iostream>

Item::Item() : nume(""), type(""), value(0.0)
{
}

Item::Item(std::string newNume, std::string newType, double newValue) : 
nume(newNume), 
type(newType),
value(newValue)
{
}

void Item::afisare()
{
    std::cout << "(nume, type, value) = (" << nume << ", " << type << ", " << value << ")" << std::endl;
}

void Item::setNume(std::string newNume)
{
    nume = newNume;
}

void Item::setType(std::string newType)
{
    type = newType;
}

void Item::setValue(double newValue)
{
    value = newValue;
}

std::string Item::getNume()
{
    return nume;
}

std::string Item::getType()
{
    return type;
}

double Item::getValue()
{
    return value;
}

Item operator+(Item i1, Item i2)
{
    Item rez;
    //std::string nume = i1.getNume() + " " + i2.getNume();
    rez.setNume(i1.getNume() + "-" + i2.getNume());
    rez.setType(i1.getType() + "-" + i2.getType());
    rez.setValue(i1.getValue() + i2.getValue());

    return rez;
}


