#include "roata.h"
#include <iostream>

std::ostream &operator<<(std::ostream &stream, const Roata& r)
{
    stream << r.dimensiune << std::endl;
    
    return stream;
}

std::istream &operator>>(std::istream &stream, Roata& r)
{
    stream >> r.dimensiune;

    return stream;
}

Roata::Roata(unsigned int newDimensiune)
{
    dimensiune = newDimensiune;
}

// Roata::Roata(const Roata& r)
// {
//     this->dimensiune=r.dimensiune;
// }

// Roata::Roata(const Roata &&r)
// {
//     this->dimensiune = r.dimensiune;
// }
