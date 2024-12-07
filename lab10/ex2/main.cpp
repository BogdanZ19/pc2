#include <iostream>
#include <vector>
#include "Persoana.h"
#include "Student.h"
#include "StudentMaster.h"


void afisareProfil(StudentAC s);


int main()
{
    PersoanaAC p1("1234567890123", "Ana", "Iasi");
    p1.afisareProfil();

    StudentAC s;
    s.afisareProfil();

    StudentAC s1("1234567890122", "Ion", "Vaslui", 2, 10);
    StudentAC s2("1456782345112", "Adrian", "Galati", 1, 5);
    s1.schimbareAdresa("Bucuresti");
    s1.inscriereAnStudiu(3);
    s1.afisareProfil();

    std::cout << std::endl;
    afisareProfil(s1);

    std::cout << "Dintre Ion si Adrian, nota mai mare o are " << s1.comparaNota(s2).getNume() << std::endl << std::endl;

    StudentMaster sm1("1234145671923", "Bogdan", "Braila", 2, 7, "numeDiz");
    StudentMaster sm2("1234145671923", "George", "Braila", 2, 5, "numeDiz");
    StudentMaster sm3("1234145671923", "Mihai", "Braila", 2, 9, "numeDiz");
    std::vector<StudentMaster> v1 = {sm1, sm2, sm3}; 

    sm1.afisareProfil();

    StudentMaster max = sm1;
    for(auto it = v1.begin(); it != v1.end(); it++)
    {
        if(it->getNota() > max.getNota())
            max = *it;
    }

    max.afisareProfil();

    return 0;
}

void afisareProfil(StudentAC s)
{
    std::cout << "(an, nota) = (" << s.getAn() << ", " << s.getNota() << ")" << std::endl;    
}


