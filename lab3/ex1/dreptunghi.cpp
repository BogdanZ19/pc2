#include "dreptunghi.h"

void Dreptunghi:: SetLungime(int lung)
{
    lungime = lung;
}

void Dreptunghi:: SetLatime(int lat)
{
    latime = lat;
}

int Dreptunghi:: Aria()
{
    return lungime * latime;
}

Dreptunghi::Dreptunghi() : latime(0), lungime(0)
{
    //lungime = 0;
    //latime = 0;
}
