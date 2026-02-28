#include<iostream>

int main() {
	int a,b;
	bool trig;

	std::cin >> a >> b;
	trig = a >= b;

	if(trig){
		std::cout << "Yes" << std::endl;
	} else{
		std::cout << "No" << std::endl;
	}

	return 0;
}