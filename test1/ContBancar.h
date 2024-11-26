#pragma once
#include <iostream>

class ContBancar
{
private:
    double sold;
    int numarCont;
public:
    ContBancar(double s = 0.0, int nrC = 0);
    
    void setSold(double);
    double getSold();

    void setNr(int);
    int getNr();

    double operator!();
    ContBancar operator-(double);

    friend std::ostream& operator<<(std::ostream& stream, const ContBancar);
    //friend std::istream& operator>>(std::istream& stream, ContBancar&);
};


