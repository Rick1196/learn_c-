// a preprocessor directive that includes the content of the standard c++ header file
#include <iostream>
int multiply(int a, int b = 7);

int multiply(int a, int b)
{
   return a * b;
}

int main()
{
   // std is a namespace, and :: is the scrope resolution operator
   std::cout << "Hello world!" << std::endl;
   std::cout << multiply(7) << std::endl;
}