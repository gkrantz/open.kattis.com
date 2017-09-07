#include <iostream>

int main() {
	int n, m;
	int start, duration;
	std::cin >> n >> m;
	while (n != 0)
	{
		int starts[n] = {};
		int durations[n] = {};
		for (int i = 0; i < n; ++i)
		{
			std::cin >> start >> start >> starts[i] >> durations[i];
		}
		/*for (int i = 0; i < n; ++i)
		{
			for (int j = i + 1; j < n ++j)
			{

			}
		}*/
		for (int i = 0; i < m; ++i)
		{
			int result = 0;
			std::cin >> start >> duration;
			for (int j = 0; j < n; ++j)
			{
				if (starts[j] < start + duration && starts[j] + durations[j] > start)
					result++;
			}
			std::cout /*<< "between " << start << " and " << start + duration << " = " */<< result << std::endl;
		}
		std::cin >> n >> m;
	}
	return 0;
}