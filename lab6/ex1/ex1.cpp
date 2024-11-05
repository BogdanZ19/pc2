#include <iostream>
#include "complex.h"
#include "template.h"

int main()
{
    Complex a(2,3), b(3,5);

    std::cout << suma<Complex> (a,b);  



    return 0;
}