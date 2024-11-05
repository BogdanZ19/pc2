#include "multime.h"
#include <iostream>

template <typename T>
Multime<T>::Multime(int n, T v[]) : n(n)
{
    std::copy(v, v+n, this->v);
}

template <typename T>
Multime<T>::Multime(const Multime &m) : n(m.n)
{
    
    std::copy(m.v, m.v+m.n, this->v);
    
}

template <typename T>
T Multime<T> ::operator!()
{
    T max = v[0];

    for(int i = 0; i < n-1; i++)
    {
        if(v[i+1] > max)
        {
            max = v[i+1];
        }
    }

    return max;
}

template <typename T>
void Multime<T>::afisare()
{
    for(int i = 0; i < n; i++)
    {
        std::cout << v[i] << "\t";
    }
    std::cout << std::endl;
}

template <typename T>
Multime<T> Multime<T>::operator+(Multime<T> m)
{
    Multime t = m;
    t.n = std::min(n, m.n);
    for(int i = 0; i < t.n; i++)
    {
        t.v[i] = v[i] + m.v[i];
    }
    return t;
}

template class Multime<int>;