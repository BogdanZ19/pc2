#include <iostream>
#include <cmath>
#include "complex.h"

Complex::Complex(int r, int i) : re(r), im(i)
{
}

Complex Complex::operator+(const Complex c)
{
    Complex rez;

    rez.im = im + c.im;
    rez.re = re + c.re;

    return rez;
}

double Complex::operator!()
{
    double rez = sqrt(pow(re, 2.0) + pow(im, 2.0));

    return rez;
}

Complex Complex::operator-(const Complex c)
{
    Complex rez;

    rez.im = im - c.im;
    rez.re = re - c.re;

    return rez;
}

Complex Complex::operator*(const Complex c)
{
    Complex rez;

    rez.re = (re * c.re) - (im * c.im);
    rez.im = (re * c.im) + (im * c.re);

    return rez;
}

std::ostream &operator<<(std::ostream &stream, Complex c)
{
    stream << "(re, im) = (" << c.re << ", " << c.im << ")" << std::endl;

    return stream;
}
