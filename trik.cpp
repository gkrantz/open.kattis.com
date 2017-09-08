#include <iostream>

int main() {
	std::string input;
	std::cin >> input;
	bool c1 = true, c2 = false, c3 = false;
	for (int i = 0; i < input.length(); ++i)
	{
		if (input[i] == 'A' && (c1||c2))
		{
			c1 = !c1;
			c2 = !c2;
		}else if (input[i] == 'B' && (c3||c2))
		{
			c3 = !c3;
			c2 = !c2;
		}else if (input[i] == 'C' && (c1||c3))
		{
			c1 = !c1;
			c3 = !c3;
		}
	}
	if (c1)
		std::cout << 1;
	else
	if (c2)
		std::cout << 2;
	else
	if (c3)
		std::cout << 3;
	return 0;
}