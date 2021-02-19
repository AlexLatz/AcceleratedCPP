#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

void quartiles();
void wordCount();
void longShort();
void multiGrades();
int main()
{
    multiGrades();
}
void quartiles()
{
    std::cout << "Enter values: ";
    std::vector<int> list;
    int n;
    while (std::cin >> n)
    {
        list.push_back(n);
    }
    sort(list.begin(), list.end());
    int quartile = 1;
    for (int i = 0; i < list.size(); i++)
    {
        if (i == (list.size() / 4) * (quartile - 1) && quartile < 5)
        {
            std::cout << std::endl
                      << "Quarter " << quartile << ": " << std::endl;
            quartile++;
        }
        std::cout << list[i] << " ";
    }
}
void wordCount()
{
    std::vector<std::string> words;
    std::cout << "Enter words: ";
    std::string w;
    while (std::cin >> w)
    {
        words.push_back(w);
    }
    sort(words.begin(), words.end());
    int start = 0;
    for (int i = 1; i < words.size(); i++)
    {
        if (words[i] != words[i - 1])
        {
            std::cout << words[i - 1] << ": " << i - start << std::endl;
            start = i;
        }
    }
}
void longShort()
{
    std::cout << "Enter words: ";
    std::vector<int> lengths;
    std::string word;
    while (std::cin >> word)
    {
        lengths.push_back(word.length());
    }
    sort(lengths.begin(), lengths.end());
    std::cout << "Longest word: " << lengths.back() << ", Shortest word: " << lengths.front() << std::endl;
}
void multiGrades()
{
    std::vector<std::string> names;
    std::vector<int> grades;
    std::cout << "Enter student name: ";
    std::string name;
    while (std::cin >> name)
    {
        names.push_back(name);
        grades.push_back(0);
        int numGrades = 0;
        int grade;
        std::cout << "Enter grades, -1 ends: ";
        while (std::cin >> grade && grade > 0)
        {
            grades[grades.size()-1] += grade;
            numGrades++;
        }
        if (numGrades > 0) grades[grades.size()-1] /= numGrades;
        std::cout << "Enter student name: ";
    }
    for (int i = 0; i < names.size(); i++)
    {
        std::cout << std::endl << names[i] << ": " << grades[i] << std::endl;
    }
}