#include <iostream>

int main() {
	int t;
	std::cin >> t;

	while (t--) {
		long long n;
		std::cin >> n;

		if (n == 0) {
			std::cout << 0;
		} else {
			bool first = true;
			while (n > 0) {
				int digit = n % 10;
				if (!first) {
					std::cout << ' ';
				}
				std::cout << digit;
				first = false;
				n /= 10;
			}
		}

		std::cout << '\n';
	}

	return 0;
}
