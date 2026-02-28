#include <iostream>

bool isLucky(int number) {
	while (number > 0) {
		int digit = number % 10;
		if (digit != 4 && digit != 7) {
			return false;
		}
		number /= 10;
	}

	return true;
}

int main() {
	int a, b;
	std::cin >> a >> b;

	bool found = false;
	for (int value = a; value <= b; ++value) {
		if (isLucky(value)) {
			found = true;
			std::cout << value << ' ';
		}
	}

	if (!found) {
		std::cout << -1;
	}

	std::cout << '\n';
	return 0;
}
