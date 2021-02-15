#include <iostream>
#include <string>

int main() 
{
    std::cout << "Please enter your first name: " << std::endl;
    std::string name;
    std::cin >> name;
    
    std::string greeting = "* Hello, " + name + "! *";
    std::string line(greeting.size(), '*');
    std::string space(greeting.size()-2, ' ');
    space = "*" + space + "*";
    
    std::cout << line << std::endl;
    std::cout << space << std::endl;
    std::cout << greeting << std::endl;
    std::cout << space << std::endl;
    std::cout << line << std::endl;
    return 0;
}