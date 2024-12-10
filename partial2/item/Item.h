#pragma once
#include <string>

class Item
{
protected:
    std::string nume;
    std::string type;
    double value;
public:
    Item();
    Item(std::string newNume, std::string newType, double newValue);

    void afisare();
    void setNume(std::string newNume);
    void setType(std::string newType);
    void setValue(double newValue);
    std::string getNume();
    std::string getType();
    double getValue();
};

Item operator+(Item i1, Item i2);

