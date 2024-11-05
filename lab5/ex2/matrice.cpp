#include "matrice.h"
#include <iostream>

Matrice::~Matrice()
{
}

Matrice Matrice::operator+(const Matrice& m)
{
    Matrice rez;

    rez.m_iNrL = 0;
    rez.m_iNrC = 0;

    if(m_iNrL == m.m_iNrL && m_iNrC == m.m_iNrC)
    {
        rez.m_iNrL = m_iNrL;
        rez.m_iNrC = m_iNrC;

        for(int i = 0; i < m_iNrL; i++)
        {
            for(int j = 0; j < m_iNrC; j++)
            {
                rez.m_vElemente[i][j] = m_vElemente[i][j] + m.m_vElemente[i][j];
            }
        }
    }
    else    
        std::cout << "Matricele nu se pot aduna." << std::endl;

    return rez;
}

Matrice Matrice::operator++(int)
{
    Matrice m = *this;
    
    for(int i = 0; i < m_iNrL; i++)
    {
        for(int j = 0; j < m_iNrC; j++)
        {
            m_vElemente[i][j]++;
        }
    }
    return m;
}

Matrice Matrice::operator++()
{
    for(int i = 0; i < m_iNrL; i++)
    {
        for(int j = 0; j < m_iNrC; j++)
        {
            m_vElemente[i][j]++;
        }
    }
    return *this;
}

Matrice Matrice::operator~()
{
    if(m_iNrC == m_iNrL)
    {
    for(int i = 0; i < m_iNrL; i++)
    {
        for(int j = 0; j < i; j++)
        {
            std::swap(m_vElemente[i][j], m_vElemente[j][i]);           
        }
    }
    }
    else
        std::cout << "Matricea trebuie sa fie patratica" << std::endl;
        
    return *this;
}

int Matrice::operator[](int x)
{
    int rez;

    return m_vElemente[x/m_iNrC][x%m_iNrC];
}

void Matrice::citire()
{
    std::cout << "nrlinii: ";
    std::cin >> m_iNrL;
    std::cout << "nrColoane: ";
    std::cin >> m_iNrC;

    std::cout << "introduceti matricea:" << std::endl;
    for(int i = 0; i < m_iNrL; i++)
    {
        for(int j = 0; j < m_iNrC; j++)
        {
            std::cout << "v[" << i << "][" << j <<"] = ";
            std::cin >> m_vElemente[i][j];
        }
    }

}

void Matrice::afisare()
{
    std::cout << "matricea introdusa:" << std::endl;
    for(int i = 0; i < m_iNrL; i++)
    {
        for(int j = 0; j < m_iNrC; j++)
        {
            std::cout << m_vElemente[i][j] << "\t";
        }
        std::cout <<"\n";
    }   
}

Matrice Matrice::operator*(const Matrice& m)
{
    Matrice rez;

    rez.m_iNrL = 0;
    rez.m_iNrC = 0;

    if(m_iNrC == m.m_iNrL)
    {
        rez.m_iNrL = m_iNrL;
        rez.m_iNrC = m.m_iNrC;

        for(int i = 0; i < m_iNrL; i++)
        {
            for(int j = 0; j < m.m_iNrC; j++)
            {
                rez.m_vElemente[i][j] = 0;
                for(int k = 0; k < m_iNrC; k++)
                {
                    rez.m_vElemente[i][j] += m_vElemente[i][k] * m.m_vElemente[k][j];
                }
            }
        }
    }
    else
        std::cout << "Nu s-a putut face inmultirea" << std::endl;
    
    return rez;
}

bool operator==(Matrice m1, Matrice m2)
{
    if(m1.m_iNrL == m2.m_iNrL && m1.m_iNrC == m2.m_iNrC)
    {
        for(int i = 0; i < m1.m_iNrL; i++)
        {
            for(int j = 0; j < m1.m_iNrC; j++)
            {
                if(m1.m_vElemente[i][j] != m2.m_vElemente[i][j])
                    return false;
            }
        }
        return true;
    }
    return false;
}

std::ostream &operator<<(std::ostream &os, const Matrice &obj)
{
    os << "matricea introdusa:" << std::endl;
    for(int i = 0; i < obj.m_iNrL; i++)
    {
        for(int j = 0; j < obj.m_iNrC; j++)
        {
            os << obj.m_vElemente[i][j] << "\t";
        }
        os << std::endl;
    }       

    return os;
}
