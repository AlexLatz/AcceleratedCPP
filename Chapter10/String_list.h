#include <list>
#include <string>
#include <iostream>

class String_list {
    std::list<std::string> list;
    public:
    typedef std::list<std::string>::iterator iterator;
    typedef size_t size_type;
        void add(std::string s) {
            list.push_back(s);
        }
        iterator begin() {
            return list.begin();
        }
        iterator end() {
            return list.end();
        }
        size_type size() {
            return list.size();
        }
};
String_list split(std::string s);
