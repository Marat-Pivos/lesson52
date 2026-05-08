#include "util.h"
#include "logic.h"

int main() {
	int array[SIZE];
	int size;

	cout << "Input the size: ";
	cin >> size;

	init_random(array, size, -100, 100);

	print("Array before: ");
	print(convert(array,size));

	sort_bubble(array, size);

	print("\nArray after : ");
	print(convert(array, size));
	print("\n");


	return 0;
}