#include <string>
#include <vector>
#include <map>
#include <iostream>

typedef std::vector<std::string> Rule;
typedef std::map<std::string, std::vector<Rule> > Grammar;

bool isCategory(std::string s);
void readIn(Grammar& grammar);
std::string parseCategory(Grammar& grammar, std::string category);
