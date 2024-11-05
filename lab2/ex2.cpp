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

int &findMin(int a[], int n)
{
    int idx = 0;
    int min = a[0];

    for(int i = 1; i < n; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
            idx = i;
        }
    }
    return a[idx];
}


int main()
{

    int n = 3;
    int x[] = {3, 1, 2};

    std::cout << "dupa inlocuirea el min arr devine: " <<std::endl;
    findMin(x, n) = 0;
    afisareArr(x, n);
    


    return 0;
}