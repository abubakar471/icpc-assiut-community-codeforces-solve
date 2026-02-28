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

    std::sort(inits.begin(), inits.end());

    for (int i = 0; i < (int)inits.size(); i++)
    {
        std::cout << inits.at(i) << std::endl;
    }

    std::cout << std::endl;

    for (int i = 0; i < (int)finals.size(); i++)
    {
        std::cout << finals.at(i) << std::endl;
    }
}