#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int main()
{
	int len, temp;
	char c;
	cin >> len;
	while (len != 0)
	{
		int* positions = new int[len];
		string str, str2;
		for (int i = 0; i < len; i++)
		{
			cin >> temp;
			positions[i] = temp;
		}
		stringstream ss;
		getline(cin, str);
		getline(cin, str);
		ss << str;
		if (str.length() % len != 0)
		{
			for(int i = 0; i < len - (str.length() % len); i++)
				ss << " ";
			getline(ss, str);
		}
		str2 = str;
		//cout << "LENGTH: " << str.length() <<endl;
		for (int i = 0; i < str.length(); i++)
			str2[i] = str[(int)(i/len) * len + positions[i%len] - 1];
		cout << '\'' << str2 << '\'' << endl;
		delete[] positions;
		cin >> len;
	}
	return 0;
}