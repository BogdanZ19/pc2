#include "dreptunghi.h"
#include "iostream"

int main()
{
    Dreptunghi d; // nu se apeleaza de ex: Dreptunghi d(); deoarece compilatorul ar crede ca se apeleaza o functie
    Dreptunghi dv[10];

    d.SetLungime(2);
    d.SetLatime(3);

    std::cout << d.Aria() << std::endl;

    return 0;   
}