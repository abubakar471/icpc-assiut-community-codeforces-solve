#include <iostream>

bool isPrime(int x) {
	if (x < 2) {
		return false;
	}

	for (int d = 2; d * d <= x; ++d) {
		if (x % d == 0) {
			return false;
		}
	}

	return true;
}

int main() {
	int n;
	std::cin >> n;

	for (int i = 2; i <= n; ++i) {
		if (isPrime(i)) {
			std::cout << i << ' ';
		}
	}

	return 0;
}
