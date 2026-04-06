#include <iostream>
#include <cstdlib>

void print(int* integerArray, int size) {
	for (int elements{}; elements < size; ++elements) {
		std::cout << integerArray[elements] << " ";
	}
	std::cout << std::endl;
}
void reverse(int* integerArray, int size) {
	int buffer{};
	for (int elements{}; elements < size/2; ++elements) {
		buffer = integerArray[elements];
		integerArray[elements] = integerArray[size - elements - 1];
		integerArray[size - elements - 1] = buffer;
	}
}

int main() {
	setlocale(LC_ALL, "RU");

	int array[9]{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int size{ sizeof(array) / sizeof(int) };

	std::cout << "До функции reverse: ";
	print(array, size);

	reverse(array, size);

	std::cout << "После функции reverse: ";
	print(array, size);

	return EXIT_SUCCESS;
}
