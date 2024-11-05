#pragma once
#ifndef _COMPLEX_H_
#define _COMPLEX_H_

class Complex{
    private:
        int re, im;
    public:
        Complex(){};
        Complex(int r, int i);
        Complex(Complex&&);
        Complex(const Complex&);
        ~Complex();
        //Complex() = default;
        Complex aduna(Complex c2);
        void afisare();
};


#endif