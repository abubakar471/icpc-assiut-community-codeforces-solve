#include<iostream>

int main(){
    long long inp; // 400
    long long days, months, years;

    std::cin >> inp;

    years = inp / 365; // 400 / 365 = 1
    
    inp = inp - (365  * years); // 400 - (365 * 1) = 35

    months = inp / 30; // 35 / 30 = 1

    inp = inp - (30 * months); // 35 - (30 * 1) = 5

    days = inp; // 5

    std::cout << years << " years" << std::endl;
    std::cout << months << " months" << std::endl;
    std::cout << days << " days" << std::endl;

    return 0;
}