#include <iostream>

int main() {
	int days;
	std::cout << "Enter number of days";
	std::cin >> days;

	int weeks = days / 7;
	int remainder = days % 7;

	std::cout << "Full weeks:" << weeks << std::endl;
	std::cout << "Remaining days:" << remainder << std::endl;

	return 0;
}
