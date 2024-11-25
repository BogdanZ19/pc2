#include <iostream>
#include <string>

unsigned countUpper(std::string s)
{
    unsigned k = 0;

    for (std::string::iterator i = s.begin(); i != s.end(); i++)
    {
        if(*i >= 'A' && *i <= 'Z')
        {
            k++;
        }
    }

    return k;
}

unsigned countDigits(std::string s)
{
    unsigned k = 0;

    for (std::string::iterator it = s.begin(); it != s.end(); it++)
    {
        if(*it >= '0' && *it <= '9')
        {
            k++;
        }
    }

    return k;
}

int main()
{

    std::cout << countUpper("mErG lA maRe") << std::endl;
    std::cout << countDigits("astazi este 23 noiembrie") << std::endl;


    return 0;
}