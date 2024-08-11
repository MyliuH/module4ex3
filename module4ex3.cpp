#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	for (int i = 0; i < n - 1; i++) {
		std::cout << "*";
		for (int j = 0; j < i; j++) {
			std::cout << " ";
		}
	std::cout << "*" << std::endl;
	};
	for (int i = 0; i < n; i++) {
		std::cout << "*";
	}
}

