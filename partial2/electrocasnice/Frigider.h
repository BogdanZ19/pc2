#pragma once
#include "Electrocasnic.h"

class Frigider : public Electrocasnic
{
private:
    unsigned int volum;
public:
    Frigider(std::string newProducator = "", double newPretFaraTva = 0.0, unsigned int newVolum = 0);
    Frigider(const Frigider&);
    Frigider(Frigider&&);
    ~Frigider();

    void afisare();
    void operator!();

    Frigider& operator=(const Frigider& f1);
    Frigider& operator=(Frigider&& f1);

};
