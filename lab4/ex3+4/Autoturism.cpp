#include "Autoturism.h"
#include <iostream>
#include <cstring>

Autoturism::Autoturism() : culoare(new char[1]), an_fabricatie(0)
{
}

Autoturism::Autoturism(const char *c, unsigned int n) : culoare(new char[strlen(c)+1]), an_fabricatie(n)
{
    strcpy(culoare, c);
}

Autoturism::Autoturism(const Autoturism& a) : culoare(new char[strlen(a.culoare) +1]), an_fabricatie(a.an_fabricatie)
{
    std::cout<<"Const de copiere"<<std::endl;
    strcpy(culoare, a.culoare);
}

Autoturism::Autoturism(Autoturism&& deMutat) : culoare(deMutat.culoare), an_fabricatie(deMutat.an_fabricatie)
{
    std::cout << "Const de mutare" << std::endl;
    
    deMutat.culoare = nullptr;
    deMutat.an_fabricatie = 0;
}

Autoturism::~Autoturism()
{
    an_fabricatie = 0;
    if(culoare != nullptr)
    {
        delete[] culoare;
        culoare = 0;
    }
}

void Autoturism::citire()
{
    char buffer[20];

    std::cout << "Culoare: ";
    std::cin >> buffer;

    strcpy(culoare, buffer);
 
    std::cout << "An Fabricatie: ";
    std::cin >> an_fabricatie;
}

void Autoturism::afisare()
{
    std::cout << "(Culoare, An): (" << culoare << ", " << an_fabricatie << ")" << std::endl;
}

void Autoturism::schimbareCuloare(const char* newcolor)
{
    strcpy(culoare, newcolor);
}

bool Autoturism::comparaAn(Autoturism a)
{
    if(an_fabricatie > a.an_fabricatie)
        return 1;
    else
        return 0;
}