#include <iostream>

int main()
{
   long int a;
   std::cout << "input number: \n";
   std::cin >> a;
   std::cout << "The next number for the number " << a << " is " << a + 1 << std::endl;
   std::cout << "The previous number for the number " << a << " is " << a - 1 << std::endl;
}
