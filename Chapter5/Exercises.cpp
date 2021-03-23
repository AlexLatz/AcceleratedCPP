#include "Exercises.h"
#include <iostream>
#include <cctype>
#include <list>
#include <algorithm>

int main()
{
    permutedIndex();
}

void permutedIndex()
{
    //read lines into vector, then split each word and create indexes, add to main vector
    //then print out the main vector
    //TODO: add all words into one vector and sort first
    auto lines = readLines();
    std::vector<std::string> result;
    for (std::string line : lines) {
        createIndicesFromLine(result, line);
    }
    std::sort(result.begin(), result.end());
}
std::vector<std::string> readLines()
{
    std::vector<std::string> lines;
    std::cout << "Enter lines:" << std::endl;
    while (std::cin) {
        std::string s;
        std::getline(std::cin, s);
        lines.push_back(s); 
    }
    return lines;
}
void createIndicesFromLine(std::vector<std::string>& result, std::string& line)
{
    std::list<std::string> words;
    int start = 0;
    for (int i = 0; i < line.size(); i++) {
        if (std::isblank(line[i])) {
            words.push_back(line.substr(start, i));
            start = i+1;
        }
    }
    for (int i = 0; i < words.size(); i++) {
        std::string permutation;
    }
}
