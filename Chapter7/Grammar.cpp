#include "Grammar.h"

int main() 
{
    Grammar grammar;
    readIn(grammar);
}

bool isCategory(std::string s) 
{
    return s[0] == '<' && s[s.size()-1] == '>';
}

std::string parseCategory(Grammar& grammar, std::string category)
{
}


void readIn(Grammar& grammar)
{
    while (true)
    {
        std::cout << "Enter a category: ";
        std::string category;
        std::cin >> category;
        if (category.empty()) break;
        std::cout << "Enter rules, blank to stop";
        Rule rule;
        while (true)
        {
            std::string s;
            std::cin >> s;
            if (s.empty()) break;
            rule.push_back(s); 
        }
        grammar[category].push_back(rule);
    }
    
}
