#include <vector>
#include <string>

//5.1
struct permutedIndex
{
    std::string beginning;
    std::string rest;
};

void permutedIndex();
bool compIndex(struct permutedIndex i1, struct permutedIndex i2);
std::vector<std::string> readLines();
void createIndicesFromLine(std::vector<struct permutedIndex>& result, std::string& line);

//5.5
std::vector<std::string> readInVector();
void printVector(const std::vector<std::string>& vec);
std::vector<std::string> center(const std::vector<std::string>& original);

//5.9
void lowerThenUpper();
bool isWordUpper(const std::string& word);

//might come back later for 5.10 and 5.11
