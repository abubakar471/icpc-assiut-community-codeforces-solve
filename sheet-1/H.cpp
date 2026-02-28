#include<iostream>
#include<cmath>

int main() {
	double a, b;
	double fl, ce, ro, div;

	std::cin >> a >> b;

	div = a/b;

	fl = std::floor(div);
	ce = std::ceil(div);
	ro = std::round(div);

	std::cout << "floor " << a << " / " << b << " = " << fl << std::endl;
	std::cout << "ceil " << a << " / " << b << " = " << ce << std::endl;
	std::cout << "round " << a << " / " << b << " = " << ro << std::endl;

	return 0;
}