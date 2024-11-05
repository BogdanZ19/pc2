#include "complex.h"
#include "iostream"
#include <ostream>

Complex::Complex(int r, int i): re(r), im(i)
{

}

Complex::Complex(const Complex &c): re(c.re), im(c.im)
{
    
}

Complex Complex::operator+(const Complex& c)
{
    Complex rez;

    rez.im = im + c.im;
    rez.re = re + c.re;

    return rez;
}

std::ostream &operator<<(std::ostream &os, const Complex& obj)
{
    os << "complex: (" << obj.re << ", " << obj.im << ")" << std::endl;
    
    return os;
}

Complex:: Complex(Complex&& deMutat)
{
    re = deMutat.re;
    im = deMutat.im;
    
    deMutat.re = 0;
    deMutat.im = 0;
}

Complex:: ~Complex()
{
 
}


Complex Complex::aduna(Complex c2)
{
    Complex rez;
    
    rez.re = re + c2.re;
    rez.im = im + c2.im;

    return rez;
}

void Complex::afisare()
{
    std::cout<<"(" << re << ", " << im << ")" << std::endl;
}