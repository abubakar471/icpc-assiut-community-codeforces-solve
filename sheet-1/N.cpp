#include <iostream>
#include <cctype>

int main()
{
    char ch;

    std::cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        ch = static_cast<char>(std::toupper(static_cast<unsigned char>(ch)));

        std::cout << ch << std::endl;

        return 0;
    }

    if (ch >= 'A' && ch <= 'Z')
    {
        ch = static_cast<char>(std::tolower(static_cast<unsigned char>(ch)));
        std::cout << ch << std::endl;

        return 0;
    }
}