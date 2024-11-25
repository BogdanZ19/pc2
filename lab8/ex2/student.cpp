#include "student.h"

StudentAC::StudentAC(std::string newNume, int newNota) : nume(newNume) , nota(newNota)
{
}

void StudentAC::citireStudent()
{
    std::cout << "Nume: ";
    std::cin >> nume;
    std::cout << "Nota: ";
    std::cin >> nota;
}

void StudentAC::afisare()
{
    std::cout << "(" << nume << ", " << nota << ")" << std::endl;
}

void StudentAC::afisareFaraEndl()
{
    std::cout << "(" << nume << ", " << nota << ")";
}

void StudentAC::setNota(int nouaNota)
{
    nota = nouaNota;
}

int StudentAC::getNota()
{
    return nota;
}

void StudentAC::setnume(std::string newNume)
{
    nume = newNume;
}

std::string StudentAC::getNume()
{
    return nume;
}

bool StudentAC::operator<(const StudentAC s)
{
    if (nota < s.nota)
    {
        return true;
    }

    return false;
}

std::ostream &operator<<(std::ostream &stream, StudentAC s)
{
    stream << "(" << s.nume << ", " << s.nota << ")";

    return stream;
}

std::ostream &operator<<(std::ostream &stream, std::vector<StudentAC> s)
{
    for(std::vector<StudentAC>::iterator i = s.begin(); i != s.end(); i++)
    {
        stream << *i << "\t";
    }

    stream << std::endl;

    return stream;
}

void citireArr(StudentAC *&s, int &n)
{
    std::cout << "nr de elemente = ";
    std::cin >> n;

    s = new StudentAC[n];

    for(int i = 0; i < n; i++)
    {
        (s+i)->citireStudent();
    }
}

void afisareArr(StudentAC *s, int n)
{
    for(int i = 0; i < n; i++)
    {
        (s+i)->afisareFaraEndl();
        std::cout << "\t";
    }
    std::cout << std::endl;
}

std::vector<StudentAC> exchange(StudentAC* s1, int n)
{
    std::vector<StudentAC> s2(s1, s1 + n);

    return s2;
}


