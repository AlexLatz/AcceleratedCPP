#include "String_list.h"

int main()
{
    std::cout << "Enter a line" << std::endl;
    std::string s;
    std::getline(std::cin, s);
    String_list list = split(s);
    for (String_list::iterator iter = list.begin(); iter != list.end(); iter++) {
        std::cout << *iter << std::endl;
    }
}

String_list split(std::string s)
{
    String_list list;
    const char* p = s.c_str();
    const char* start = p;
    while (p != s.c_str() + s.size()) 
    {
        if (std::isspace(*p)) 
        {
            list.add(std::string(start, p+1));
            start = p+1;
        }
        p++;
    }
    list.add(std::string(start, p));
    return list;
}
