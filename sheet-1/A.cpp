#include<iostream>

int main(){
    std::string name;

    std::getline(std::cin >> std::ws, name);

    std::cout << "Hello, " << name;

    return 0;
}