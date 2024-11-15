#pragma once

class Complex
{
private:
    int re, im;
public:
    Complex() {};
    Complex(int r, int i);
    Complex(const Complex& c);
    Complex(Complex&& c);
    ~Complex();

    Complex aduna(Complex);
    void afisare();
};


