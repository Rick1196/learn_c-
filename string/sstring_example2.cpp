#include "main.hpp"

 int main ()
 {
   float FTemp = 0;
   float CTemp = 0;
    std::string input;
   cout << "Enter a Farenheit temperature: ";
    cin>>FTemp;

   CTemp = (FTemp - 32.0) / (9.0/5.0);
   cout << "\n"<<FTemp <<" in farenheit = " <<CTemp<<" in Celcius\n";
   return 0;
 }