#include <iostream>

using namespace std;
int main()
{
	char c, c2;
	int p1 = 0, p2 = 0, p3 = 0;
	cin >> c2 >> c;
	if (c2 == 'D')
	{
		p1++;
		if (c == 'U')
		{
			p2+=2;
			p3++;
		}
	}
	if (c2 == 'U')
	{
		p2++;
		if (c == 'D')
		{
			p1+=2;
			p3++;
		}
	}
	c2 = c;
	while (cin >> c)
	{
		if (c == 'D')
			p1+=2;
		else if (c == 'U')
			p2+=2;
		if (c != c2)
			p3++;
		c2 = c;
	}
	cout << p1 << endl << p2 << endl << p3;
	return 0;
}