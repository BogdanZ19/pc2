    #pragma once
    #include <ostream>
    #include <iostream>
    #include "roata.h"

    class Autoturism
    {
    private:
        unsigned int capacitate;
        double consum;
        Roata roata[4];
    public:
        static int k;
        Autoturism(unsigned int newCapacitate = 0, double newConsum = 0.0, const Roata newRoata[4] = nullptr);
        ~Autoturism();
        friend std::ostream& operator<<(std::ostream& stream, const Autoturism& a);
        friend std::istream& operator>>(std::istream& stream, Autoturism& a);
    };
    
