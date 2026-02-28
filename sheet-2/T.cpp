#include <iostream>

int main() {
	int n;
	std::cin >> n;

	for (int row = 1; row <= n; ++row) {
		int spaces = n - row;
		int stars = 2 * row - 1;

		for (int i = 0; i < spaces; ++i) {
			std::cout << ' ';
		}
		for (int i = 0; i < stars; ++i) {
			std::cout << '*';
		}
		std::cout << '\n';
	}

	return 0;
}
