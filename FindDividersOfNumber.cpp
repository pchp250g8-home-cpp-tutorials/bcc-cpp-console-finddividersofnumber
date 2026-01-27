#include <iostream>
#include <tchar.h>

int _tmain(int argc, _TCHAR* argv[])
{
   unsigned long ulNumber;
   std::cout << "Input an integer positive number\r\n";
   std::cin >> ulNumber;
   std::cout << "The number " << ulNumber << " has the folowing dividers:\r\n";
   for (unsigned long i = 1; i <= ulNumber; i++)
   {
     if (ulNumber % i == 0)
     std::cout << i << " ";
   }
   std::cout << "\r\n";
   std::cin.ignore();
   std::cin.get();
   return 0;
}
