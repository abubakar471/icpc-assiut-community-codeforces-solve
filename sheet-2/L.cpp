#include <iostream>

int main() {
	int a, b;
	std::cin >> a >> b;

	while (b != 0) {
		int remainder = a % b;
		a = b;
		b = remainder;
	}

	std::cout << a << '\n';
	return 0;
}
