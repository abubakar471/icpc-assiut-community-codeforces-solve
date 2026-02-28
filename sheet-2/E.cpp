#include <iostream>

int main() {
	int n;
	std::cin >> n;

	long long maximumValue;
	std::cin >> maximumValue;

	for (int i = 1; i < n; ++i) {
		long long value;
		std::cin >> value;
		if (value > maximumValue) {
			maximumValue = value;
		}
	}

	std::cout << maximumValue << '\n';
	return 0;
}
