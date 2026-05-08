#include "util.h"

int main() {
	int array[SIZE];
	int size;

	cout << "Input the size: ";
	cin >> size;

	init_random(array, size, -100, 100);

	print("Array before: ");
	print(convert(array,size));

	return -1;
}