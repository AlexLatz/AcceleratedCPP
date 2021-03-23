#include "Exercises.h"
#include <iostream>
#include <iomanip>
#include <cctype>
#include <algorithm>

int main()
{
    permutedIndex();
}

void permutedIndex()
{
    auto lines = readLines();
    std::vector<struct permutedIndex> result;
    for (std::string line : lines) {
        createIndicesFromLine(result, line);
    }
    std::sort(result.begin(), result.end(), compIndex);
    for (struct permutedIndex index : result) {
        std::cout << std::setw(20) << index.beginning << std::setw(20) << index.rest << std::endl;
    }
}

bool compIndex(struct permutedIndex i1, struct permutedIndex i2)
{
    return i1.rest < i2.rest;
}
std::vector<std::string> readLines()
{
    std::vector<std::string> lines;
    std::cout << "Enter lines:" << std::endl;
    while (std::cin) {
        std::string s;
        std::getline(std::cin, s);
        if (!std::isspace(s[0])) lines.push_back(s); 
    }
    return lines;
}
void createIndicesFromLine(std::vector<struct permutedIndex>& result, std::string& line)
{
    std::vector<std::string> words;
    int start = 0;
    for (int i = 0; i < line.size(); i++) {
        if (std::isspace(line[i])) {
            words.push_back(line.substr(start, i-start));
            start = i+1;
        } else if (i == line.size()-1) {
            words.push_back(line.substr(start, line.size()-start));
        }
    }
    for (int i = 0; i < words.size(); i++) {
        struct permutedIndex index;
        for (int j = 0; j < words.size(); j++) {
            if (j < i) index.beginning += words[j] + " ";
            else index.rest += words[j] + " ";
        }
        result.push_back(index);
    }
}
