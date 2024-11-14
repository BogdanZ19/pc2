#include "autoturism.h"

Autoturism::Autoturism(unsigned newCap, double newConsum, Roata newRoata[]): Capacitate(newCap), Consum(newConsum)
{
    if(newRoata != nullptr)
    {
        std::copy(newRoata, newRoata+4, this->roata);
    }
    k++;
}

Autoturism::~Autoturism()
{
    k--;
}

std::ostream &operator<<(std::ostream &stream, const Autoturism &a)
{
    stream << "(capacitate, consum) = (" << a.Capacitate << ", " << a.Consum << ")" << std::endl;
    stream << "Dimensiunea rotilor:" << std::endl;

    for(int i = 0; i < 4; i++)
    {
        stream << "Roata [" << i << "] = " << a.roata[i] << std::endl;
    }

    
    return stream;
}

std::istream &operator>>(std::istream &stream, Autoturism &a)
{
    std:: cout << "capacitate = ";
    stream >> a.Capacitate;
    std:: cout << "consum = ";
    stream >> a.Consum;
    

    for(int i = 0; i < 4; i++)
    {
        std::cout << "Roata [" << i << "] = ";

        stream >> a.roata[i];
    }

    return stream;
}
