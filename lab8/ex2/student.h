#pragma once
#include <string>
#include <iostream>
#include <vector>

class StudentAC
{
    std::string nume;
    int nota;

public:
    StudentAC(std::string newNume = " ", int newNota = 0);
    void citireStudent();
    void afisare();
    void afisareFaraEndl();
    void setNota(int nouaNota);
    int getNota();
    void setnume(std::string);
    std::string getNume();
    friend std::ostream& operator<<(std::ostream&, StudentAC);
    friend std::ostream& operator<<(std::ostream&, std::vector<StudentAC>);
    bool operator<(const StudentAC);
};

void citireArr(StudentAC*&, int&);
void afisareArr(StudentAC*, int);
std::vector<StudentAC> exchange(StudentAC*, int);
void afisareVector(std::vector<StudentAC>);