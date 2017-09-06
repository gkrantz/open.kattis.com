#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	int* array = new int[n];
	int* maxes = new int[n];
	int max;
	std::cin >> max;
	array[0] = max;
	for (int i = 1; i < n; ++i)
	{
		std::cin >> array[i];
		if (array[i] > max)
			max = array[i];
		maxes[i] = max;
	}
	int min = array[n-1] + 1;
	int count = 0;
	for (int i = n - 1; i >= 0; --i)
	{
		if (maxes[i] <= array[i] && min > array[i])
			count++;
		if (array[i] < min)
			min = array[i];
	}
	std::cout << count;
	return 0;
}