#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

int main() {

	int min;
	string minInput;
	std::cout << "Minimum number: ";
	std::cin >> minInput;
	min = std::stoi(minInput);

	int max;
	string maxInput;
	std::cout << "Maximum number: ";
	std::cin >> maxInput;
	max = std::stoi(maxInput);

	string input;

	while (true) {

		std::srand(static_cast<unsigned int>(std::time(0)));

		int number = min + (std::rand() % (max - min + 1));
		std::cout << "Is your number bigger than: " << number << "\n";
		std::cin >> input;

		if (input == "yes") {
			min = number + 1;
		}else if (input == "no") {
			max = number;
		}else if (input == "equal" || "done") {
			std::cout << "I did it! Your number: " << number;
			break;
		}else {
			std::cout << "Please just 'yes', 'no' or 'equeal'";
		}if (min >= max) {
			std::cout << "The possible range is exhausted. Did you maybe make a mistake?";
		}
	}
	return 0;
}
