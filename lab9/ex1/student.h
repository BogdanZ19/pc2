#pragma once
#include <string>
#include "persoana.h"

class Student : public Persoana
{
    int m_iAnStudiu;
    int m_iNotaP2;

public:
    Student(std::string nume, std::string adresa, int anStudiu, int notaP2);
    void inscriereAnStudiu(int anStudiuNou);
    void schimbaNota(int newNota);
    void afisareProfil();
    bool operator<(const Student);
};