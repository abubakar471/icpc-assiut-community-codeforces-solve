#include <iostream>

int main() {
	int n;
	std::cin >> n;

	int evenCount = 0;
	int oddCount = 0;
	int positiveCount = 0;
	int negativeCount = 0;

	for (int i = 0; i < n; ++i) {
		int value;
		std::cin >> value;

		if (value % 2 == 0) {
			++evenCount;
		} else {
			++oddCount;
		}

		if (value > 0) {
			++positiveCount;
		} else if (value < 0) {
			++negativeCount;
		}
	}

	std::cout << "Even: " << evenCount << '\n';
	std::cout << "Odd: " << oddCount << '\n';
	std::cout << "Positive: " << positiveCount << '\n';
	std::cout << "Negative: " << negativeCount << '\n';

	return 0;
}
