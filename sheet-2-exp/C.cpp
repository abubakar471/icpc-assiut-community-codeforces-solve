#include<iostream>
#include<vector>

int main(){
    int t,n;
    int positive = 0;
    int negative = 0;
    int even = 0;
    int odd = 0;

    std::vector<int> data;

    std::cin >> t;

    while(t--){
        std::cin >> n;

        data.push_back(n);
    }

    for(int i=0; i < (int) data.size(); i++){
        if(data[i] % 2 == 0){
            even += 1;
        } else{
            odd += 1;
        }

        if(data[i] < 0) {
            negative += 1;
        }

        if(data[i] > 0) {
            positive += 1;
        }
    }

    std::cout << "Even: " << even << "\n";
    std::cout << "Odd: " << odd << "\n";
    std::cout << "Positive: " << positive << "\n";
    std::cout << "Negative: " << negative << "\n";

    return 0;
}