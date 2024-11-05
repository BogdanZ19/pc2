#include <iostream>
using namespace std;

int determinaMaxim(int a[], unsigned int dim)
{
    int maxim = a[0];
    for (unsigned int i = 1; i < dim; i++)
    {
        if (a[i] > maxim)
        {
            maxim = a[i];
        }
    }
    return maxim;
}

int sumaA(int a[], unsigned int n)
{
    int s = 0;

    for (unsigned int i = 0; i < n; i++)
    {
        s += a[i];
    }
    return s;
}

int apartine(int a[], unsigned int n, int x)
{
    for(unsigned int i = 0; i < n; i++)
    {
        if(x == a[i])
            return 1;
    }
   return 0;
}

void sort(int a[], unsigned int n)
{
bool k = 0;
int aux = 0;

    for(unsigned int i = 0; i < n-1; i++)
    {
        k = 0;
        for(unsigned int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j+1])
            {
                aux = a[j];
                a[j] = a[j+1];
                a[j+1] = aux;
                k = 1;
            }

        }
        if(!k)
            break;
    }
}

    int main()
{
    int a[] = {1, 5, 7, 2, 8, 3, 4};
    int maxim, suma, x, y;
    
    maxim = determinaMaxim(a, sizeof(a) / sizeof(int));
    std::cout << "Maximul este: " << maxim << std::endl;
    suma = sumaA(a, sizeof(a) / sizeof(int));
    
    cout << "Introduceti x:\n";
    cin >> x;

    y = apartine(a, sizeof(a) / sizeof(int), x);
 
    if(y == 1)
    {
        cout << "X apartine a\n";
    }
    else 
        cout << "X nu apartine a\n";
    
    sort(a, sizeof(a) / sizeof(int));

    cout << "\nVectorul a sortat:\n";

    for(unsigned int i = 0; i < sizeof(a)/ sizeof(int); i++)
    {
        cout << a[i] << "\t";
    }
    cout << "\n";

   
    return 0;
}