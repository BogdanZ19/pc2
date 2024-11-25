#include <iostream>
#include "student.h"
#include <vector>
#include <algorithm>

int main()
{
    StudentAC s1("Andrei", 8);
    StudentAC *s2 = nullptr;
    std::vector<StudentAC> s3; 
    int n;

    s1.afisare();

    s1.setNota(6);

    s1.afisare();

    std::cout << "Introduceti array-ul: " << std::endl;
    citireArr(s2, n);
    std::cout << "Array-ul introdus este: " << std::endl;
    afisareArr(s2, n);

    s3 = exchange(s2, n);
    std::cout << "vectorul s3 este: " << s3;

    std::sort(s3.begin(), s3.end());
    std::cout << "vectorul s3 sortat este: " << s3;

    delete[] s2;

    return 0;
}