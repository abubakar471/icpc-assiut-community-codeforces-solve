#include<iostream>

int main() {
    int a,b;
    char s;

    std::cin >> a >> s >> b;

    switch (s)
    {
    case '+':
        std::cout << a + b << std::endl;
        break;
    
    case '-':
        std::cout << a - b << std::endl;
        break;
    
    case '*':
        std::cout << a * b << std::endl;
        break;
        
    case '/':
        std::cout << a / b << std::endl;
        break;

    default:
        break;
    }

    return 0;

}