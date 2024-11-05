#include <iostream>
#include <cstring>

class Persoana
{
    private:
        char *nume;
        int varsta;
    public:
        Persoana();
        Persoana(char *n, int v);
        Persoana(const Persoana&);
        Persoana(Persoana&&);
        ~Persoana();
        void afiseaza();
        bool compara(Persoana p);
};

Persoana::Persoana()
{
    nume = new char[1]();
    varsta = 0;  
}

Persoana::Persoana(char *n, int v)
{
    nume = new char[strlen(n) + 1];
    // std::strcpy_s(nume, strlen(n) + 1, n);
    std::strcpy(nume, n);
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

    nume = deMutat.nume;
    varsta = deMutat.varsta;

    deMutat.nume = nullptr;
    deMutat.varsta = 0;
}


Persoana::~Persoana()
{
    if (nume != nullptr)
        delete[] nume;
}

void Persoana::afiseaza()
{
    std::cout << "Nume = " << (nume ? nume: "N/A") << " varsta = " << varsta << std::endl;
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

int main()
{
    Persoana p1((char *)"Pavel", 22);
    Persoana p2((char *)"Ana", 43);
    

    p1.afiseaza();
    p2.afiseaza();

    std::cout << p1.compara(p2) << std::endl;
    Persoana p3 = std::move(p2);
   

    p3.afiseaza();
    p2.afiseaza();
  
    return 0;
}