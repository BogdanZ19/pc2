#include <iostream>

void afisareArr(int x[], bool k = 1, int n)
{

    for(int i = 0; i < n; i++)
    {
        if (k)
        {
            std::cout << x[i] << "\t";
        }
        else
        {
            std::cout << x[n-1-i] << "\t";
        }
    }
}

int main()
{

    int n = 3;
    int x[] = {3, 1, 2};
    bool k = 0;

    afisareArr(x, k, n);
    


    return 0;
}