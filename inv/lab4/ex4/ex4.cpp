#include <iostream>
#include "autoturism.h"

int main()
{
    Autoturism array[20], max;
    int n, k;

    std::cout << "n = ";
    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        std::cout << "Autoturismul [" << i << "]:" << std::endl;
        std::cin >> array[i];
        if(array[i].comparaAn(max))
        {
            max.switchAn(array[i]);
            k = i;
        } 
    }
    
    std::cout << std::endl << std::endl;

    for(int i = 0; i < n; i++)
    {
        std::cout << "Autoturismul [" << i << "]:" << std::endl;
        std::cout << array[i];
    }
    
    std::cout << std::endl << "Cel mai nou autoturism este: " << std::endl << array[k];

    return 0;
}