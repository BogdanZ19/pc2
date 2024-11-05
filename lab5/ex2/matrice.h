#pragma once
#include <ostream>
class Matrice
{
private:
    int m_iNrL, m_iNrC;
    int m_vElemente[10][10];

public:
    ~Matrice();
    Matrice operator+(const Matrice&);
    Matrice operator*(const Matrice&);
    friend bool operator==(Matrice, Matrice);
    friend std::ostream& operator << (std::ostream& os, const Matrice& obj);
    Matrice operator++(int);
    Matrice operator++();
    Matrice operator~();
    int operator[](int);
    void citire();
    void afisare();
};

