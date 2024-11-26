#include "profesor.h"
#include "persoana.h"
#include <algorithm>

Profesor::Profesor(
    std::string newNume, 
    std::string newAdresa, 
    std::string newGradDidactic, 
    std::vector<Student> newStudenti
    ) : Persoana(newNume, newAdresa), m_sGradDidactic(newGradDidactic), m_studenti(newStudenti)
{
}

void Profesor::afiseazaStudenti()
{
    for(auto it = m_studenti.begin(); it != m_studenti.end(); it++)
    {
        it->afisareProfil();
    }
}

void Profesor::acordaNota(int poz, int nota)
{
    m_studenti[poz].schimbaNota(nota);
}

void Profesor::sortStudenti()
{
    std::sort(m_studenti.begin(), m_studenti.end());
}
