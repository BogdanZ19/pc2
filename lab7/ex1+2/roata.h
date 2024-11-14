#pragma once
#include <ostream>

class Roata
{
private:
    unsigned int dimensiune;
public:
    Roata(unsigned int newDimensiune = 0);
    // Roata(const Roata& r);
    // Roata(const Roata&& r);
    // Roata& operator=(const Roata& obj) = default;
    // Roata& operator=(Roata&& obj) = default;
    // ~Roata();
    friend std::ostream& operator<<(std::ostream& stream, const Roata& r);
    friend std::istream& operator>>(std::istream& stream, Roata& r);
};
