#ifndef _PUNCT_H_
#define PUNCT_H_

class Punct
{
    private: 
        int x, y;
    public:
        Punct();
        Punct(int x, int y);
        void Citire();
        void Afisare();
        double Dist();
};



#endif