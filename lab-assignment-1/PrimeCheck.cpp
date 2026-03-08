#include<iostream>

bool isPrime(long long n){
    if(n < 2) return false;

    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }

    return true;
}

int main(){
    long long n;

    std::cin >> n;

    bool primeCheck = isPrime(n);

    if(primeCheck){
        std::cout << "Prime Number" << std::endl;
    } else{
        std::cout << "Not Prime Number" << std::endl;
    }

    return 0;
}