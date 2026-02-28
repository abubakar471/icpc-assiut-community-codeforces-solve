#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n = 3;

    std::vector<long long> inits;
    std::vector<long long> finals;

    for (int i = 0; i < n; i++)
    {
        long long temp;
        std::cin >> temp;

        inits.push_back(temp);
    }

    finals = inits;

    if (inits[0] > inits[1])
    {
        std::swap(inits[0], inits[1]);
    }
    if (inits[1] > inits[2])
    {
        std::swap(inits[1], inits[2]);
    }
    if (inits[0] > inits[1])
    {
        std::swap(inits[0], inits[1]);
    }

    for (int i = 0; i < (long long)inits.size(); i++)
    {
        std::cout << inits.at(i) << std::endl;
    }

    std::cout << std::endl;

    for (int i = 0; i < (long long)finals.size(); i++)
    {
        std::cout << finals.at(i) << std::endl;
    }
}