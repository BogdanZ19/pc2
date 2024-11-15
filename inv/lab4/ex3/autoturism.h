#pragma once
#include <iostream>

class Autoturism
{
private:
    char* culoare;
    unsigned an_fabricatie;
public:
    Autoturism();
    Autoturism(const char* , unsigned);
    Autoturism(const Autoturism&);
    Autoturism(Autoturism&&);
    ~Autoturism();

    friend std::ostream& operator<<(std::ostream&, const Autoturism);
    friend std::istream& operator>>(std::istream&, Autoturism&);
    void changeColor();
    bool comparaAn(const Autoturism);
};

