#pragma once

class Autoturism
{
    private:
        char* culoare;
        unsigned int an_fabricatie;
    public:
        Autoturism();
        Autoturism(const char *, unsigned int);
        Autoturism(const Autoturism&);
        Autoturism(Autoturism&&);
        ~Autoturism();

        void citire();
        void afisare();
        void schimbareCuloare(const char*);
        bool comparaAn(Autoturism);
};
