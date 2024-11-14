#pragma once
#include <iostream>
#include "roata.h"

class Autoturism
{
private:
    unsigned Capacitate;
    double Consum;
    Roata roata[4];
public:
    static int k;
    Autoturism(unsigned newCap = 0, double newConsum = 0.0, Roata newRoata[] = nullptr);
    ~Autoturism();

    friend std::ostream& operator<<(std::ostream& stream, const Autoturism& a);
    friend std::istream& operator>>(std::istream& stream, Autoturism& a);
};


