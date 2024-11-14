#pragma once
#include <iostream>

class Roata
{
private:
    unsigned Dimensiune;
public:
    Roata(unsigned newDim = 0);

    friend std::ostream& operator<<(std::ostream& stream, const Roata& r);
    friend std::istream& operator>>(std::istream& stream, Roata& r);
};




