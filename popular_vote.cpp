#include <iostream>


using namespace std;
int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n, temp, max = -1, maxi, total = 0;
		bool dupl = false;
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			cin >> temp;
			if (temp > max)
			{
				max = temp;
				maxi = j+1;
				dupl = false;
			}else if (temp == max)
				dupl = true;
			total +=temp;
		}
		if (dupl)
			cout << "no winner" << endl;
		else if (total/2 < max)
			cout << "majority winner " << maxi << endl;
		else
			cout << "minority winner " << maxi << endl;
	}
}