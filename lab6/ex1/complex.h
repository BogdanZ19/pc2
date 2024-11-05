#pragma once
#ifndef _COMPLEX_H_
#define _COMPLEX_H_
#include <ostream>

class Complex{
    private:
        int re, im;
    public:
        Complex(){};
        Complex(int r, int i);
        Complex(Complex&&);
        Complex(const Complex&);
        Complex operator+(const Complex&);
        friend std::ostream& operator << (std::ostream& os, const Complex& obj);
        ~Complex();
        //Complex() = default;
        Complex aduna(Complex c2);
        void afisare();
};


#endif