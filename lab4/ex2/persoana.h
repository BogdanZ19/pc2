#pragma once

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
