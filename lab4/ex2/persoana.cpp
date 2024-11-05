#include "persoana.h"
#include <iostream>
#include <cstring>

Persoana::Persoana()
{
    nume = new char[1]();
    varsta = 0;  
}

Persoana::Persoana(char *n, int v)
{
    nume = new char[strlen(n) + 1];
    // std::strcpy_s(nume, strlen(n) + 1, n);
    strcpy(nume, n);  //de ce nu si nume = n
    varsta = v;
}

Persoana::Persoana(const Persoana &p)
{
    nume = new char[strlen(p.nume)+1];
    strcpy(nume, p.nume);
    varsta = p.varsta;
}

Persoana:: Persoana(Persoana&& deMutat)
{
    std::cout << "S-a apelat constructorul de mutare" << std::endl;

    nume = deMutat.nume; // de ce nu si strcpy(nume, deMutat.nume)?
    varsta = deMutat.varsta;

    deMutat.nume = nullptr;
    deMutat.varsta = 0;
}


Persoana::~Persoana()
{
    varsta = 0;
    if (nume != nullptr)
        delete[] nume;
}

void Persoana::afiseaza()
{
    std::cout << "Nume = " << (nume? nume : "N/A") << " varsta = " << varsta << std::endl;
}

bool Persoana::compara(Persoana p)
{
    if (varsta > p.varsta)
    {
       return true;
    }
        else
    {
        return false;
    }
}