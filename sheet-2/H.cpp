#include <iostream>

int main() {
	int x;
	std::cin >> x;

	bool isPrime = true;
	if (x <= 1) {
		isPrime = false;
	} else {
		for (int d = 2; d * d <= x; ++d) {
			if (x % d == 0) {
				isPrime = false;
				break;
			}
		}
	}

	std::cout << (isPrime ? "YES" : "NO") << '\n';
	return 0;
}
