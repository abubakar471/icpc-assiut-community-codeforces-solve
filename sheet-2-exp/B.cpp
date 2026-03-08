#include<iostream>

int main() {
    int n;
    bool even = false;

    std::cin >> n;

    for(int i=1; i <= n; i++){
        if(i % 2 == 0 ){
            std::cout << i << "\n";

            even = true;
        } 
    }

    if(!even){
        std::cout << -1 << "\n";
    }

    return 0;
}