#include <iostream>

int getFirstDigit(int n) {
    if(n < 0){
        n = -n;
    }

    while(n >= 10){
        n /= 10;
    }

    return n;
}

int main()
{
    int num;

    std::cin >> num;
  
    num = getFirstDigit(num);



    
    if (num % 2 == 0)
    {
        std::cout << "EVEN" << std::endl;
    }
    else
    {
        std::cout << "ODD" << std::endl;
    }

    return 0;
}