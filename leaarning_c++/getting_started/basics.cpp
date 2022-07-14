// a preprocessor directive that includes the content of the standard c++ header file
#include <iostream>
// preprocessor edit the source code, cutting some bits out changing
// others and adding other thinks
#define ZERO 0
int multiply(int a, int b = 7);

int multiply(int a, int b)
{
   return a * b;
}

int main()
{
   // std is a namespace, and :: is the scrope resolution operator
   std::cout << "Hello world!" << std::endl;
   std::cout << multiply(ZERO) << std::endl;
}