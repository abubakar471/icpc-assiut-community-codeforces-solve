#include <iostream>

int main() {
	int n, m;

	while (std::cin >> n >> m) {
		if (n <= 0 || m <= 0) {
			break;
		}

		int start = (n < m) ? n : m;
		int end = (n > m) ? n : m;
		int sum = 0;

		for (int value = start; value <= end; ++value) {
			std::cout << value << ' ';
			sum += value;
		}

		std::cout << "sum =" << sum << '\n';
	}

	return 0;
}
