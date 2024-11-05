#include <iostream>

class Punct
{
    private:
    int x, y;
    public:
    Punct(int newValX = 0, int newValY = 0);
    Punct (const Punct &p);
};

Punct::Punct(const Punct &p)
{
    std::cout << "S-a apelat constructorul de copiere" << std::endl;
    x = p.x;
    y = p.y;
}

Punct::Punct(int newValX, int newValY): x(newValX), y(newValY)
{
    
}

int main()
{
    Punct p1(10, 20);
    std:: cout<<"a"<<std::endl;
    Punct p2(p1);
    std:: cout<<"b"<<std::endl;
    Punct p3{p2};
    std::cout<<"c"<<std::endl;
    Punct p4 = p2;

    return 0;
}