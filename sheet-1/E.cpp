#include<iostream>
#include<iomanip>

#define pi 3.141592653

int main(){
	double r, area;

	std::cin >> r;

	area = pi * (r * r);

	std::cout << std::fixed << std::setprecision(9) << area << std::endl;

	return 0;
}