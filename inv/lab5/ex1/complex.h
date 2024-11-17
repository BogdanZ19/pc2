#pragma once
#include <iostream>

class Complex
{
private:
    int re, im;
public:
    Complex(int r = 0, int i = 0);

    friend std::ostream& operator<<(std::ostream& stream, Complex c);
    Complex operator+(const Complex);
    double operator!();
    Complex operator-(const Complex);
    Complex operator*(const Complex);

};


