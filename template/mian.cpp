#include <iostream>

int main(){
    // check if c++ 20 is supported
    auto result = (10 <=> 20) > 0;
    std::cout << result << std::endl;
}