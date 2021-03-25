#include "Exercises.h"
#include <iostream>
#include <iomanip>
#include <cctype>
#include <algorithm>

int main()
{
    lowerThenUpper();
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

std::vector<std::string> readInVector()
{
    std::vector<std::string> read;
    while (std::cin) {
        std::string s;
        std::getline(std::cin, s);
        read.push_back(s);
    }
    return read;
}

void printVector(const std::vector<std::string>& vec)
{
    for (std::string s : vec) {
        std::cout << s << std::endl;
    }
}

std::vector<std::string> center(const std::vector<std::string>& original)
{
    std::string::size_type maxlen;
    for (std::string str : original) {
        maxlen = std::max(maxlen, str.length()); 
    }
    std::vector<std::string> result;
    for (std::string str : original) {
        int num = (maxlen - str.length()) / 2;
        std::string line;
        std::string spaces = std::string(num, ' ');
        line = spaces + str + spaces;
        result.push_back(line);
    }
    return result;
}

void lowerThenUpper()
{
    std::cout << "Enter words: ";
    std::vector<std::string> upper;
    std::vector<std::string> lower;
    while (std::cin) {
        std::string s;
        std::cin >> s;
        if (isWordUpper(s)) upper.push_back(s);
        else lower.push_back(s);
    }
    for (std::string s : lower) std::cout << s << ", ";
    std::cout << std::endl;
    for (std::string s : upper) std::cout << s << ", ";
    std::cout << std::endl;
}

bool isWordUpper(const std::string& word)
{
    for (int i = 0; i < word.length(); i++) {
        if (std::isupper(word[i])) {
            return true;
        }
    }
    return false;
}
