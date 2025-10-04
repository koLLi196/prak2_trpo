#include <iostream>


int main()
{
	int arr[] = { 6, 2, 6, 8, 2, 1 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int target = 6;

	std::cout << "Looking target: " << target << std::endl;
	std::cout << "entry index: ";

	for (int i = 0; i < size; i++) {
		if (arr[i] == target) {
			std::cout << i << " ";
		}
	}


	return 0;

}