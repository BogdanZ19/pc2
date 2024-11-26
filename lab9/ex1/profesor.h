#pragma once
#include "persoana.h"
#include "student.h"
#include <string>
#include <vector>

class Profesor : public Persoana
{
private:
    std::string m_sGradDidactic;
    std::vector <Student> m_studenti;
public:
    Profesor(std::string newNume = " ",
    std::string newAdresa = " ", 
    std::string newGradDidactic = " ", 
    std::vector <Student> newStudenti = {});
    void afiseazaStudenti();
    void acordaNota(int poz, int nota);
    void sortStudenti();
};
