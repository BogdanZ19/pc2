#include "autoturism.h"
#include <iostream>
#include <cstring>

Autoturism::Autoturism(): culoare(nullptr), an_fabricatie(0) {}

Autoturism::Autoturism(const char *newCuloare, unsigned newAn) : an_fabricatie(newAn)
{
    if(newCuloare != nullptr)
    {
        culoare = new char[strlen(newCuloare) + 1];
        strcpy(culoare, newCuloare);
    }
    else
    {
        culoare = nullptr;
    }

}

Autoturism::Autoturism(const Autoturism &a): an_fabricatie(a.an_fabricatie)
{
    if(a.culoare != nullptr)
    {
        culoare = new char[strlen(a.culoare) + 1];
        std::strcpy(culoare, a.culoare);
    }
    else 
    {
        culoare = nullptr;
    }
}

Autoturism::Autoturism(Autoturism &&a)
{
    culoare = a.culoare;
    an_fabricatie = a.an_fabricatie;

    a.culoare = nullptr;
    a.an_fabricatie = 0;
}

Autoturism::~Autoturism()
{
    an_fabricatie = 0;

    if (culoare != nullptr)
    {
        delete[] culoare;
        culoare = 0;
    }
}

void Autoturism::changeColor()
{
    char buffer[20];
    
    std::cout << "Noua culoare = ";
    std::cin >> buffer; 
    strcpy(culoare, buffer);
}

bool Autoturism::comparaAn(const Autoturism a)
{
    if(an_fabricatie > a.an_fabricatie)
    {
        return true;
    }
    return false;
}

std::ostream &operator<<(std::ostream &stream, const Autoturism a)
{
    stream << "(culoare, an) = (" << a.culoare << ", " << a.an_fabricatie << ")" << std::endl;

    return stream;
}

std::istream &operator>>(std::istream &stream, Autoturism& a)
{
    char buffer[20];
    
    std::cout << "Culoare = ";
    stream >> buffer;

    if(a.culoare == nullptr)
    {
        a.culoare = new char[strlen(buffer)+1];
    }
    strcpy(a.culoare, buffer);

    std::cout << "An = ";
    stream >> a.an_fabricatie;

    return stream;
}

