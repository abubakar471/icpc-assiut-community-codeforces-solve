#include<iostream>

int main(){
	long long n;
	long long total;

	std::cin >> n;

	total = (n * (n + 1)) / 2;

	std::cout << total << std::endl;

	return 0;
}