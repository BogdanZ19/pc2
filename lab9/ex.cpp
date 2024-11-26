#include <iostream>


void functie(int arr[])
{
    arr[0] = 5;
}

int main()
{
    int *v = new int[4];

    v[0] = 1;
    v[1] = 2;
    v[2] = 3;
    v[3] = 4;

    
    functie(v);


    for(int i = 0; i < 4; i++)
    {
        std::cout << *(v+i) << "\t";
    }
    std::cout << std::endl;

    delete[] v;

    return 0;
}