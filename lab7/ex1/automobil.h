    #pragma once
    #include <ostream>
    #include <iostream>
    class Automobil
    {
    private:
        unsigned int capacitate;
        double consum;
    public:
        static int k;
        Automobil(unsigned int newCapacitate = 0, double newConsum = 0);
        ~Automobil();
        friend std::ostream& operator<<(std::ostream& stream, const Automobil& a);
        friend std::istream& operator>>(std::istream& stream, Automobil& a);
    };
    
