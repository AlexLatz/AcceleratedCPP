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
    std::vector<Rule> rules = grammar.at(category);
    Rule rule = rules[rand() % rules.size()];
    std::string words;
    for (std::string s : rule) {
        if (isCategory(s)) words += parseCategory(grammar, s);
        else words += s + " ";
    }
    return words;
}


void readIn(Grammar& grammar)
{
    while (std::cin)
    {
        std::cout << "Enter a category: ";
        std::string category;
        std::cin >> category;
        std::cout << "Enter rules, -1 to exit: ";
        while (true) 
        {
            std::string line;
            std::getline(std::cin, line);
            if (line == "-1") break;
            Rule rule = split(line);
            grammar[category].push_back(rule);
        }
    }
    
}

Rule split(std::string line)
{
    Rule rule;
    int index = 0;
    for (int i = 0; i < line.size(); i++) {
        if (std::isspace(line[i])) rule.push_back(line.substr(index, index-i));
    }
    return rule;
}
