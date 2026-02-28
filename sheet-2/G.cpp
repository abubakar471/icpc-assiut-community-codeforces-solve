#include <iostream>

int main() {
	int t;
	std::cin >> t;

	while (t--) {
		int n;
		std::cin >> n;

		unsigned long long factorial = 1;
		for (int i = 2; i <= n; ++i) {
			factorial *= i;
		}

		std::cout << factorial << '\n';
	}

	return 0;
}
