#include "roata.h"

Roata::Roata(unsigned newDim): Dimensiune(newDim)
{
}

std::ostream &operator<<(std::ostream &stream, const Roata &r)
{
    stream << r.Dimensiune;

    return stream;
}

std::istream &operator>>(std::istream &stream, Roata &r)
{
    stream >> r.Dimensiune;

    return stream;
}
