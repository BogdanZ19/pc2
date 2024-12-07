#include "Student.h"
#include <iostream>

StudentAC::StudentAC()
{
    //std::cout << "constr. fara arg. StudentAC" << std::endl;
    m_ianStudiu = 0;
    m_inotaP2 = 0;
}

StudentAC::StudentAC(std::string cnp, std::string nume, std::string adresa, int anStudiu, int notaP2) : 
PersoanaAC(cnp, nume, adresa), 
m_ianStudiu(anStudiu),
m_inotaP2(notaP2)
{
    //std::cout << "constr. cu arg. StudentAC" << std::endl;
}

StudentAC::~StudentAC()
{
    //std::cout << "destructor StudentAC" << std::endl;
}

void StudentAC::afisareProfil()
{
    PersoanaAC::afisareProfil();
    std::cout << "(anStudiu, nota) = (" << m_ianStudiu << ", " << m_inotaP2 << ")" << std::endl;
}

void StudentAC::inscriereAnStudiu(int anStudiuNou)
{
    m_ianStudiu = anStudiuNou;
}

int StudentAC::getAn()
{
    return m_ianStudiu;
}

int StudentAC::getNota()
{
    return m_inotaP2;
}

StudentAC StudentAC::comparaNota(const StudentAC s)
{
    if(m_inotaP2 > s.m_inotaP2)
        return *this;
    return s;
}