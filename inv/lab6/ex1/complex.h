#pragma once
#include <iostream>
class complex
{
private:
    int re, im;
public:
    complex(int newRe = 0, int newIm = 0);
    
    friend std::ostream& operator<<(std::ostream&, const complex);
    friend std::istream& operator>>(std::istream&, complex&);

    complex operator+(const complex);
};

