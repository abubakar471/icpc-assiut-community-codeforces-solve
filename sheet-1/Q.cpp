#include <iostream>

int main()
{
    double x, y;

    std::cin >> x >> y;

    if (x == 0.0 && y == 0.0)
    {
        std::cout << "Origem" << std::endl;
        return 0;
    }

    if (x == 0.0 && y != 0.0)
    {
        std::cout << "Eixo Y" << std::endl;
        return 0;
    }

    if (y == 0.0 && x != 0.0)
    {
        std::cout << "Eixo X" << std::endl;
        return 0;
    }

    if (x > 0.0 && y > 0.0)
    {
        std::cout << "Q1" << std::endl;
        return 0;
    }

    if (x < 0.0 && y > 0.0)
    {
        std::cout << "Q2" << std::endl;
        return 0;
    }

    if (x < 0.0 && y < 0.0)
    {
        std::cout << "Q3" << std::endl;
        return 0;
    }

    if (x > 0 && y < 0)
    {
        std::cout << "Q4" << std::endl;
        return 0;
    }

}