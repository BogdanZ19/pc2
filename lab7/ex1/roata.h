#pragma once
#include <ostream>

class Roata
{
private:
    unsigned int dimensiune;
public:
    Roata(unsigned int newDimensiune = 0);
    // ~Roata();
    friend std::ostream& operator<<(std::ostream& stream, const Roata& r);
    friend std::istream& operator>>(std::istream& stream, Roata& r);
};
