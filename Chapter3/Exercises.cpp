#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

void quartiles();
void wordCount();
void longShort();
int main()
{
    longShort();
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