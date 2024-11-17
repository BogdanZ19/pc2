#include "autoturism.h"


Autoturism::Autoturism(unsigned int newCapacitate, double newConsum, const Roata newRoata[]): capacitate(newCapacitate), consum(newConsum)
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
    stream << "Capacitatea = " << a.capacitate << std::endl <<"Consum = " << a.consum << std::endl << std::endl;
    
    stream << "Dimensiunile rotilor:" << std::endl;
    for(int i = 0; i < 4; i++)
    {
        stream << "Roata[" << i << "] = " << a.roata[i] << std::endl;
    }

    return stream;
}

std::istream &operator>>(std::istream &stream, Autoturism& a)
{
    std::cout << "Introduceti datele pentru noul autoturism:" << std::endl;
    std::cout << "Capacitatea = ";
    stream >> a.capacitate;
    std::cout << "Consum = ";
    stream >> a.consum;

    std::cout << "Introduceti dimensiunile rotilor:" << std::endl;
    for(int i = 0; i < 4; i++)
    {
        std::cout << "Roata[" << i << "] = ";
        stream >> a.roata[i];
    }

    return stream;
}
