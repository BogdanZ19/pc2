#pragma once
#include "Persoana.h"
#include <string>

class StudentAC : public PersoanaAC
{
    int m_ianStudiu;
    int m_inotaP2;

public:
    StudentAC();
    StudentAC(std::string cnp, std::string nume, std::string adresa, int anStudiu, int notaP2);
    ~StudentAC();

    void afisareProfil();
    void inscriereAnStudiu(int anStudiuNou);
    int getAn();
    int getNota();
    StudentAC comparaNota(const StudentAC );
};