#include <iostream>
#include <algorithm>

struct Student
{
    int an;
    double medie;
};

void citire(Student*& v, int& n)
{
    std::cout << "n = ";
    std::cin >> n;

    v = new Student[n];
    for(int i = 0; i < n; i++)
    {
        std::cout << "an_student[" << i << "] = ";
        std::cin >> v[i].an;
        std::cout << "medie_student[" << i << "] = ";
        std::cin >> v[i].medie; 
    }
}

void afisareArr(Student *x, int n)
{
    for(int i = 0; i < n; i++)
    {
        std::cout << "Studentul " << i << " este anul " << x[i].an << " si are media " << x[i].medie << std::endl;
    }
}

void sortare(Student *x, int n)
{
    
    for(int i = 0; i < n-1; i++)
    {   
        int min_idx = i;

        for(int j = i+1; j < n; j++)
        {
            if(x[j].medie < x[min_idx].medie)
            {
                min_idx = j;
            }

            std::swap(x[i], x[min_idx]);
        }
    }
}

double medie(Student *x, int n)
{
    double s = 0;
    for(int i = 0; i < n; i++)
    {
        s += x[i].medie;
    }
    return s/(double)n;
}

int main()
{
    Student *x;
    int n = 3;

    citire(x, n);
    afisareArr(x, n);   

    std::cout << "\nDupa sortarea in functie de an: " << std::endl; 
    sortare(x, n);
    afisareArr(x,n);

    std::cout << "\nMedia notelor este: " << medie(x, n) << std::endl;

    delete[] x;

    return 0;
}

