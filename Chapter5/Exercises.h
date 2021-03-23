#include <vector>
#include <string>

struct permutedIndex
{
    std::string beginning;
    std::string rest;
};

void permutedIndex();
bool compIndex(struct permutedIndex i1, struct permutedIndex i2);
std::vector<std::string> readLines();
void createIndicesFromLine(std::vector<struct permutedIndex>& result, std::string& line);

