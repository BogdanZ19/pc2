#pragma once
#include <iostream>

template <typename T>
T sortare(T *v, int n)
{
    T aux;
    bool swap;
    for(int i = 0; i < n-1; i++)
    {
        swap = 0;

        for(int j = 0; j < n-i-1; j++)
        {
            if(v[j] > v[j+1])
            {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }

        if(!swap)
        {
            break;
        }
    }

    return v[0];
}