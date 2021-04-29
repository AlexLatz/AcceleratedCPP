#include <list>
#include <string>

class String_list {
    std::list<std::string> list;
    public:
        String_list();
        void add(std::string s) {
            list.push_back(s);
        }
        auto iterator() {
            return list.begin();
        }
        auto end() {
            return list.end();
        }
        std::list<std::string>::size_type size() {
            return list.size();
        }
};
String_list split(std::string s);
