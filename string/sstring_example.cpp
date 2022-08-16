#include <iostream>
#include <string>
#include <sstream>
/* Goal: practice getting string inputs and
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room.
 **Then prompt for the width of the room.
 **Print out the area of the room.
 */

int main()
{
    float length = 0;
    float width = 0;
    std::string input;
    std::cout << "Enter the length of the room: " << std::endl;
    std::getline(std::cin, input);
    std::stringstream(input) >> length;
    std::cout << "Enter the width of the room: " << std::endl;
    std::getline(std::cin, input);
    std::stringstream(input) >> width;
    std::cout << "The area of the room is: " << length * width << std::endl;
    return 0;
}