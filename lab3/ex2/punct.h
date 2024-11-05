#pragma once

class Punct
{
    private:
        int x, y;
    public:
        Punct();
        Punct(int x, int y);
        //~Punct();
        void Citire();
        void Afisare();
        double Dist();
        bool Comp(Punct p);
};

Punct maxim(Punct a[], int n);
