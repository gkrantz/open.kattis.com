#include <iostream>
#include <stdlib.h> 
#include <algorithm> 
#include <string> 

using namespace std;

int main()
{
	int i = 0, in, in2;
	while (cin >> in)
	{
		int min = 1000000, max = -1000000;
		for(int j = 0; j < in; j++)
		{
			cin >> in2;
			min = std::min(min, in2);
			max = std::max(max, in2);
		}
		cout << "Case " << (++i) << ": " << min << " " << max << " " << max-min << endl;
	}
	return 0;
}