#include <iostream>

int main() {
	int t;
	std::cin >> t;

	while (t--) {
		int x, y;
		std::cin >> x >> y;

		int start = (x < y) ? x : y;
		int end = (x > y) ? x : y;
		int sum = 0;

		for (int value = start + 1; value < end; ++value) {
			if (value % 2 != 0) {
				sum += value;
			}
		}

		std::cout << sum << '\n';
	}

	return 0;
}
