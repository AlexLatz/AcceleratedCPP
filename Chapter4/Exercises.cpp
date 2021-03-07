#include "Exercises.h"

int main()
{
    std::vector<std::string> vec;
    wordStore(std::cin, vec);
}

void square100s()
{
    for (int i = 1; i <= 100; i++)
    {
        std::cout << i << setw(5) << i*i << std::endl;
    }
}

std::istream& wordStore(std::istream& in, std::vector<std::string>& vec)
{
    vec.clear();
    if (in)
    {
        std::cout << "Enter words: ";
        std::string word;
        while (in >> word)
        {
            vec.push_back(word);
        }
        in.clear();
    }
    return in;
}

double avgVec(const std::vector<double>& vec)
{
    double sum = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        sum += vec[i];
    }
    return sum / vec.size();
}