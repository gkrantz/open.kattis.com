#include <iostream>
int main() {
	int n;
	std::cin >> n;
	char lastchar = 'Q', c;
	std::string s;
	int counter = 0;
	while (n--)
	{
		std::cin >> s;
		for (int i = 0; i < s.length(); ++i)
		{
			c = s[i];
			if (c == 'D' && lastchar == 'C')
				goto hell;	
			lastchar = c;
		}
		counter++;
		hell:;
		lastchar = 'Q';
	}
	std::cout << counter;
}