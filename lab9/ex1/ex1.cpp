#include <iostream>
#include "persoana.h"
#include "student.h"
#include "profesor.h"

int main()
{
    Persoana p1("Ion", "str. Libertatii");
    Persoana p2("Andrei", "str. Calea Victoriei");
    Student s1("Mihai", "str. Cuza Voda", 2, 5);
    Student s2("Petru", "str. Stefan cel mare", 2, 3);
    p1.afisareProfil();
    p2.afisareProfil();
    s1.afisareProfil();
    s2.afisareProfil();

    Profesor prof1("A", "B", "C", {s1,s2});
    std::cout << "Prof1:" << std::endl;
    //prof1.afisareProfil();
    prof1.afiseazaStudenti();

    std::cout << "Prof1 dupa schimbare nota student 1: " << std::endl;
    prof1.acordaNota(0, 10);
    prof1.afiseazaStudenti();

    std::cout << "Prof1 dupa sortare dupa nota: " << std::endl;
    prof1.sortStudenti();
    prof1.afiseazaStudenti();
    return 0;
}