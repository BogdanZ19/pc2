#include "complex.h"
#include <iostream>

complex::complex(int newRe, int newIm) : re(newRe), im(newIm)
{
}

complex complex::operator+(const complex c)
{
    complex rez;

    rez.im = im + c.im;
    rez.re = re + c.re;

    return rez;
}

std::ostream &operator<<(std::ostream &stream, const complex c)
{
    stream << "(re, im) = (" << c.re << ", " << c.im << ")" << std::endl;

    return stream;
}

std::istream &operator>>(std::istream &stream, complex &c)
{
    std::cout << "re = ";
    stream >> c.re;
    std::cout << "im = ";
    stream >> c.im;

    return stream;
}
