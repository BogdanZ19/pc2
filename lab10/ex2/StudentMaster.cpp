#include "StudentMaster.h"
#include <iostream>

StudentMaster::StudentMaster(): m_sNumeDizertatie("")
{
}

StudentMaster::StudentMaster(std::string cnp, std::string nume, std::string adresa, int anStudiu, int notaP2, std::string numeDizertatie) : 
StudentAC(cnp, nume, adresa, anStudiu, notaP2),
m_sNumeDizertatie(numeDizertatie)
{
}

void StudentMaster::afisareProfil()
{
    StudentAC::afisareProfil();
    std::cout << "numeDizertatie = " << m_sNumeDizertatie << std::endl;
}
