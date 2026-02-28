#include<iostream>

int main() {
	std::string f1, s1, f2, s2;

	std::cin >> f1 >> s1;
	std::cin >> f2 >> s2;

	if(s1 == s2){
		std::cout << "ARE Brothers" << std::endl;
	} else{
		std::cout << "NOT" << std::endl;
	}


	return 0;
}