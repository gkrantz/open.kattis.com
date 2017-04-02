#include <iostream>
#include <stdlib.h> 

int main()
{
    using namespace std;
    std::string::size_type sz;
	string in;
	int current = 0, max = 0, maxindex = 0;
	for (int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			cin >> in;
			current += atoi(in.c_str());
		}
		if (current > max)
		{
			max = current;
			maxindex = i;
		}
		current = 0;
	}
	cout << maxindex + 1 << " " << max;
	return 0;
}
