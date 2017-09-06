#include <iostream>
#include <stdio.h>

int winner(std::string m1, std::string m2)
{
	if (m1 == "rock")
	{
		if(m2 == "scissors")
			return 1;
		else if (m2 == "paper")
			return 2;
		return 0;
	}
	if (m1 == "paper")
	{
		if(m2 == "scissors")
			return 2;
		else if (m2 == "paper")
			return 0;
		return 1;
	}
	if (m1 == "scissors")
	{
		if(m2 == "scissors")
			return 0;
		else if (m2 == "paper")
			return 1;
		return 2;
	}
}

int main()
{
	while (true)
	{
		int k, n;
		std::cin >> n;
		if (n == 0)
			break;
		std::cin >> k;
		int wins[n] = {};
		int losses[n] = {};

		for (int i = 0; i < (k * n * (n - 1))/2; ++i)
		{
			int p1, p2, win;
			std::string m1, m2;
			std::cin >> p1 >> m1 >> p2 >> m2;
			if ((win = winner(m1, m2)) == 1)
			{
				++wins[p1-1];
				++losses[p2-1];
			}else if (win == 2)
			{
				++wins[p2-1];
				++losses[p1-1];
			}
		}
		for (int i = 0; i < n; ++i)
			if (wins[i]+losses[i] == 0)
				std::cout << '-' << std::endl;
			else
				printf("%4.3f\n", (float)wins[i]/(wins[i]+losses[i]));
		std::cout << std::endl;
	}
	return 0;
}