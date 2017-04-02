#include <iostream>
#include <stdlib.h> 
#include <algorithm> 
#include <string> 

using namespace std;
//globals
string current, smallest = "zzzzzzzzzzzzzzzzzzzz";

void splitcompare(string string1, string string2)
{
	//cout << "comparing " << string1 << " with " << string2 << "\n";
	int sindex = 0, eindex;
	while((eindex = string1.find("#", sindex)) != string::npos)
	{
		if (eindex-sindex > 1)
		{
			current = string1.substr(sindex, eindex-sindex);
			if (current < smallest)
				smallest = current;
		}
		sindex = eindex + 1;
	}
	if (sindex < string1.length()-1)
		current = string1.substr(sindex);
	if (current < smallest)
		smallest = current;
}

int main()
{
	int R, C, rowi = 0;
	string row;
	cin >> R >> C;
	char* chars = new char[R];
	string* rows = new string[R];

	for(int i = 0; i < R; i++)
	{
		cin >> row; 
		rows[rowi++] = row;
		splitcompare(row, smallest);
	}
	for(int i = 0; i < C; i++)
	{
		for(int j = 0; j < R; j++)
		{
			chars[j] = rows[j][i];
		}
		string column (chars, R);
		splitcompare(column, smallest);
	}
	cout << smallest;
	return 0;
}