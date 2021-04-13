#include "Grammar.h"

int main() 
{
    std::srand(time(0));
    Grammar grammar;
    readIn(grammar);
    while (true) 
    {
        std::cout << "Enter a category, -1 to exit: ";
        std::string category;
        std::cin >> category;
        if (category == "-1") break;
        else std::cout << parseCategory(grammar, category) << std::endl;
    }

}

bool isCategory(std::string s) 
{
    return s[0] == '<' && s[s.size()-1] == '>';
}

std::string parseCategory(Grammar& grammar, std::string category)
{
    std::vector<Rule> rules = grammar.at(category);
    Rule rule = rules[std::rand() % rules.size()];
    rules.
    std::string words;
    for (std::string s : rule) {
        if (isCategory(s)) words += parseCategory(grammar, s);
        else words += s + " ";
    }
    return words;
}


void readIn(Grammar& grammar)
{
    while (true)
    {
        std::cout << "Enter a category, -1 to exit: ";
        std::string category;
        std::cin >> category;
        if (category == "-1") break;
        std::cout << "Enter rules, -1 to exit: ";
        while (true) 
        {
            std::string line;
            std::getline(std::cin, line);
            if (line.empty()) continue;
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
    for (int i = 0; i <= line.size(); i++) {
        if (std::isspace(line[i]) || i == line.size()) {
            if (!line.substr(index, i-index).empty()) {
                rule.push_back(line.substr(index, i-index));
                index = i+1;
            }
        }
    }
    return rule;
}
