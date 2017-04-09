#include <iostream>
#include <bitset>
#include <string>
#include <stdlib.h>

using namespace std;
int count(string str)
{
	int ret = 0;
	for (int i = 0; i < str.length(); i++)
		if (str[i] == '1')
			ret++;
	return ret;
}

int main()
{
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		string s, s1;
		cin >> s;
		int max = 0, temp;
		for (int j = 1; j <= s.length(); j++)
		{
			temp = atoi(s.substr(0, j).c_str());
			temp = count(bitset< 32 >( temp ).to_string());
			if (max < temp)
				max = temp;
		}
		cout << max << endl;
	}
	return 0;
}