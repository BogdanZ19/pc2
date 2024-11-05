#include <iostream>

bool citire(int*& v, int& n)
{
    std::cout << "n = ";
    std::cin >> n;

    if (n <= 0)
    {
        return false;
    }

    v = new int[n];
    for(int i = 0; i < n; i++)
    {
        std::cout << "v[" << i << "] = ";
        std::cin >> v[i];
    }

    return true;

}

void afisareArr(int x[], int n)
{
    for(int i = 0; i < n; i++)
    {
        std::cout << x[i] << "\t";
    }
    std::cout << std::endl;
}

int main()
{
    int *v;
    int n;

    citire(v, n);
    afisareArr(v, n);

    delete[] v;
    return 0;
}