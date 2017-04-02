#include <iostream>
#include <stdlib.h> 

int main()
{
	using namespace std;
	string row;
	int R, C, ZR, ZC;
	cin >> R >> C >> ZR >> ZC;
	for(int i = 0; i < R; i++)
	{
		cin >> row;
		for(int j = 0; j < ZR; j++)
		{
			for(int o = 0; o < row.length(); o++)
				for(int k = 0; k < ZC; k++)
					cout << row[o];
			if(j < ZR-1)
				cout << "\n";
		}
		if(i < R-1)
			cout << "\n";
	}
	return 0;
}
