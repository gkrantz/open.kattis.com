#include <iostream>
#include <algorithm> 

int main() {
	int n, bus;
	std::cin >> n;
	int i = n;
	int array[i];
	while (i--)
	{
		std::cin >> array[n-1-i];
	}
	std::sort(array, array + n);
	int start = -1, end = -1;
	for (int i = 0; i < n; ++i)
	{
		if (start == -1)
		{
			start = array[i];
		}
		else if (array[i] == array[i - 1] + 1)
		{
			end = array[i];
		}else
		{
			std::cout << start;
			if (end != -1)
			{
				if (end == start + 1)
				{
					std::cout << " " << end << " ";
				}else
				{
					std::cout << "-" << end << " ";
				}
			}else
				std::cout << " ";
			start = array[i], end = -1;
		}
	}
	std::cout << start;
	if (end != -1)
	{
		if (end == start + 1)
		{
			std::cout << " " << end;
		}else
		{
			std::cout << "-" << end;
		}
	}
}