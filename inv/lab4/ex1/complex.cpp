#include "complex.h"
#include <iostream>

Complex::Complex(int r, int i): re(r), im(i)
{
}

Complex::Complex(const Complex& c): im(c.im), re(c.re)
{
}

Complex::Complex(Complex&& c): im(c.im), re(c.re)
{
    c.im = 0;
    c.re = 0;
}

Complex::~Complex()
{
}

Complex Complex::aduna(Complex c)
{
    Complex rez;
    
    rez.re = re + c.re;
    rez.im = im + c.im;

    return rez;
}

void Complex::afisare()
{
    std::cout << "(" << re << ", " << im << ")" << std::endl;
}
