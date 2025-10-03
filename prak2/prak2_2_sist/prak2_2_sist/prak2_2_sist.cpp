
#include <iostream>

int main()
{
	int arr[2][3][3] = {
		{{1,2,3},
		{4,5,6},
		{7,8,9}
		},
		{{1,2,3},
		{-4,-5,-6}
		,{-7,-8,-9}
		}
	};
	int layers = 2;
	int rows = 3;
	int columns = 3;

	for (int i = 0; i < layers; i++) {
		int sum = 0;
		for (int j = 0; j < rows; j++) {
			for (int k = 0; k < columns; k++) {
				int x = arr[i][j][k];
				sum += sqrt(x * x);
			}
		}
		std::cout << " Sum absolute value " << i + 1 << " deep mas: " << sum << std::endl;
	}
	return 0;
}