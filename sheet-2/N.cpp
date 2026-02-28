#include <iostream>

int main() {
	char symbol;
	int n;

	std::cin >> symbol;
	std::cin >> n;

	for (int i = 0; i < n; ++i) {
		int count;
		std::cin >> count;

		for (int j = 0; j < count; ++j) {
			std::cout << symbol;
		}
		std::cout << '\n';
	}

	return 0;
}
