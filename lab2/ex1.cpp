#include <iostream>
#define MAX 20

void readArr(int x[], int &n)
{
    
    std::cout << "Cate elemente are vectorul?\n";
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cout << "x[" << i << "] = ";
        std::cin >> x[i];
    }
 
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
    int x[MAX];
    int n;

    readArr(x, n);
    afisareArr(x, n);

    return 0;
}