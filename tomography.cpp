#include <iostream>

int min(int a, int b)
{
	if (a < b)
		return a;
	return b;
}

int main()
{
	int m, n;
	std::cin >> m >> n;
	int rows[n + 1] = {};
	int temp;
	int biggestRow = 0;
	for (int i = 0; i < m; ++i)
	{
		std::cin >> temp;
		rows[temp]++;
		if (biggestRow < temp)
			biggestRow = temp;
	}
	int column;
	for (int i = 0; i < n; ++i)
	{
		int removed = 0;
		std::cin >> column;
		int currentRow = biggestRow;
		while(column > 0)
		{
			if (rows[currentRow] - removed > 0)
			{
				removed = min(rows[currentRow] - removed, column);
				column -= removed;
				rows[currentRow] -= removed;
				rows[currentRow - 1] += removed;
				--currentRow;
				if (rows[biggestRow] == 0)
					biggestRow--;
			}else
			{
				removed = 0;
				--currentRow;
			}
			if (currentRow == 0 && column > 0)
			{
				std::cout << "No";
				return 0;
			}
		}
	}
	if (biggestRow == 0)
		std::cout << "Yes";
	else
		std::cout << "No";
	return 0;
}