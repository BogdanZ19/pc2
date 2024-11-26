#include <iostream>
#include "complex.h"
#include "template.h"
int main()
{
    double a = 5.8, b = 3.1;
    int c = 3, d = 4;
    complex c1, c2(3, 5);

    std::cout << "1: " << sum <double> (a, b) << std::endl << "2: " << sum <int> (c, d) << std::endl;
    
    std::cin >> c1;
    std::cout << "suma complex = " << sum <complex> (c1, c2);

    return 0;
}