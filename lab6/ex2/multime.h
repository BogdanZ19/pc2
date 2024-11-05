#pragma once

template <typename T>
class Multime
{
private:
    T v[20];
    int n;
public:
    Multime(int, T[]);
    Multime(const Multime&);
    T operator!();
    Multime <T> operator+(Multime<T>);

    void afisare();
};

