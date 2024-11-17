#pragma once
#include <cstring>
#include <iostream>

class ContBancar
{
private:
    double sold;
    std::string iban;
public:
    ContBancar(double s = 0.0, std::string ib = "");
    
    void setSold(double);
    double getSold();
    void setIban(std::string);
    std::string getIban();

    friend std::ostream& operator<<(std::ostream&, ContBancar);
    friend std::istream& operator>>(std::istream&, ContBancar&);

    double operator!();
    ContBancar operator-(double);
};

