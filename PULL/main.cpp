#include <iostream>
#include <cmath>

int main()
{
    int a;
    int b;

    if(a > 0)
    {
        std::cout << "Введите длины катетов прямоугольного треугольника: ";
        std::cin >> a;
        std::cin >> b;
        std::cout << "Длина гипотенузы: " << sqrt(a * a + b * b) << "\n";
    }
}
