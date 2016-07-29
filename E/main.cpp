#include <iostream>

int main()
{
    int vasya,t,v;

    std::cin >> v;
    std::cin >> t;

    if (v*t > 0)
    {
        vasya = (v * t) % 109;
    }

    else
    {
        if (v*t <= 0)
        {
            vasya = (109 + ((v * t) % 109)) % 109;
        }

    }
    std::cout <<  vasya;
    return 0;
}
