#include<iostream>

int main(){
	long long n,m;
	long long res;

	std::cin >> n >> m;

	res = (n % 10) + (m % 10);

	std::cout << res << std::endl;

	return 0;
}