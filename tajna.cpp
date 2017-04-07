#include <iostream>
#include <math.h>   

using namespace std;
int main()
{
	string encrypted;
	getline(cin, encrypted);
	int N = encrypted.length(), R, C;
	for (int i = sqrt(N); i > 0; i--)
	{
		if (N % i == 0)
		{
			R = i;
			C = N/i;
			break;
		}
	}
	for(int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			cout << encrypted[i+j*R];
		}
	}
	return 0;
}