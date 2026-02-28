#include <iostream>

int main() {
	int password;

	while (std::cin >> password) {
		if (password == 1999) {
			std::cout << "Correct" << '\n';
			break;
		}

		std::cout << "Wrong" << '\n';
	}

	return 0;
}
