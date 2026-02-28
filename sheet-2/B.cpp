#include<iostream>

int main(){
    int n;
    bool hasEven = false;

    std::cin >> n;

    for(int i=1; i <= n; ++i){
        if(i % 2 == 0) {
            hasEven = true;
            std::cout << i << std::endl;
        }
    }

    if(!hasEven){
        std::cout << -1 << std::endl;
    }

    return 0;
}