#include <iostream>

int main() {
	int n;
	std::cin >> n;

	int original = n;
	int reversed = 0;

	while (n > 0) {
		reversed = reversed * 10 + (n % 10);
		n /= 10;
	}

	std::cout << reversed << '\n';
	std::cout << (reversed == original ? "YES" : "NO") << '\n';

	return 0;
}
