#include <iostream>

using namespace std;
bool dot;
void print(int* columnindex, int rowindex)
{
	bool dot;
	if (*columnindex % 2 == 0)
		dot = false;
	else
		dot = true;
	if(rowindex % 2 == 1)
		dot = !dot;
	if (dot)
		cout << '.';
	else
		cout << '#';
	*columnindex += 1;
}

int main()
{
	int M, N, U, L, R, D, index;
	string str;
	cin >> M >> N >> U >> L >> R >> D;
	getline(cin, str);
	for (int i = 0; i < U+M+D; i++)
	{
		for (int j = 0; j < L; j++)
			print(&index, i);
		if (i >= U && i < U+M)
		{
			getline(cin, str);
			cout << str;
			index += N;
		}else
			for(int j = 0; j < N; j++)
				print(&index, i);
		for (int j = 0; j < R; j++)
			print(&index, i);
		index = 0;
		cout << endl;
	}
}