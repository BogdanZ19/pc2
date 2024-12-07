#include "Persoana.h"
#include <iostream>

PersoanaAC::PersoanaAC()
{
    //std::cout << "constr. fara arg. PersoanaAC" << std::endl;
    m_sCnp = std::string(13, '0');
    m_sNume = "";
    m_sAdresa = "";
}
PersoanaAC::PersoanaAC(std::string cnp, std::string nume, std::string adresa)
{
    //std::cout << "constr. cu arg. PersoanaAC" << std::endl;
    m_sCnp = cnp;
    m_sNume = nume;
    m_sAdresa = adresa;
}
PersoanaAC::~PersoanaAC()
{
    //std::cout << "destructor PersoanaAC" << std::endl;
}

void PersoanaAC::afisareProfil()
{
    std::cout << "(cnp, nume, adresa) = (" << m_sCnp << ", " << m_sNume << ", " << m_sAdresa << ")" << std::endl;
}

void PersoanaAC::schimbareAdresa(std::string adresaNoua)
{
    m_sAdresa = adresaNoua;
}

std::string PersoanaAC::getNume()
{
    return m_sNume;
}
