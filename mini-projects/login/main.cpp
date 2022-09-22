#include <iostream>
#include <fstream>
#include <string>
std::string get_user_input(std::string message)
{
    std::string input;
    std::cout << message << std::endl;
    std::getline(std::cin >> std::ws, input);
    return input;
}

bool login()
{
    std::string user;
    std::string password;
    std::string input_password;
    std::string username = get_user_input("Enter username:");
    std::ifstream istrm(username + ".txt");
    if (!istrm.is_open())
    {
        std::cout << "Invalid username" << std::endl;
        return false;
    }
    else
    {
        std::getline(istrm, user);
        std::getline(istrm, password);
        input_password = get_user_input("Enter user password");
        if (password == input_password)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

bool signin()
{
    std::string username = get_user_input("Enter username:");
    std::string password;
    std::ifstream istrm(username + ".txt");
    if (istrm.is_open())
    {
        std::cout << "Username already exist" << std::endl;
        return false;
    }
    else
    {
        std::ofstream new_file;
        new_file.open(username + ".txt");
        new_file << username << std::endl;
        password = get_user_input("Enter user password:");
        new_file << password << std::endl;
        new_file.close();
        std::cout << "Welcome " << username << std::endl;
        return true;
    }
}

int main()
{
    int selected_option;
    bool is_loged_in = false;
    while (!is_loged_in)
    {
        std::cout << "Select an option" << std::endl;
        std::cout << "1.- Enter 1 to login" << std::endl;
        std::cout << "2.- Enter 2 to register" << std::endl;
        std::cin >> selected_option;
        std::cout << selected_option << std::endl;
        switch (selected_option)
        {
        case 1:
            is_loged_in = login();
            break;
        case 2:
            is_loged_in = signin();
            break;
        default:
            std::cout << "Invalid option" << std::endl;
            break;
        }
    }
    return 0;
}