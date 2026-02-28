#include<iostream>

int main(){
	long long a, b;
	bool trig;

	std::cin >> a >> b;

	trig = a % b == 0 || b % a == 0;

	if (trig)
		std::cout << "Multiples" << std::endl;
	else
		std::cout << "No Multiples" << std::endl;

	return 0;
}