#include "String_list.h"
#include <iostream>

int main()
{
    std::cout << "Enter a line" << std::endl;
    std::string s;
    std::getline(std::cin, s);
    String_list list = split(s);
}

String_list split(std::string s)
{
    String_list list;
    const char* cstr = s.c_str();
    const char* p = cstr;
    while (p != cstr + strlen(s)) 
    {

    }

     
}
