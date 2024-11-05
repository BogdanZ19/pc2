#include "complex.h"
#include "iostream"

Complex::Complex(int r, int i): re(r), im(i)
{

}

Complex::Complex(const Complex &c): re(c.re), im(c.im)
{
    std::cout << "S-a apelat constructorul de copiere" << std::endl;
}

Complex:: Complex(Complex&& deMutat)
{
    std::cout << "S-a apelat constructorul de mutare" << std::endl;

    re = deMutat.re;
    im = deMutat.im;
    
    deMutat.re = 0;
    deMutat.im = 0;
}

Complex:: ~Complex()
{
    std::cout << "S-a apelat deconstructorul" << std::endl;
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