#include <iostream>
#include <stdlib.h> 
#include <algorithm> 
#include <string> 

using namespace std;
//globals

void splitcompare(string string1, string* smallest)
{
	string current = "zzzzzzzzzzzzzzzzzzzz";
    //cout << "comparing " << string1 << " with " << *smallest << "\n";
    int sindex = 0, eindex;
    while((eindex = string1.find("#", sindex)) != string::npos)
    {
        if (eindex-sindex > 1)
        {
            current = string1.substr(sindex, eindex-sindex);
            if (current < *smallest)
                *smallest = current;
        }
        sindex = eindex + 1;
    }
    if (sindex < string1.length()-1)
        current = string1.substr(sindex);
    if (current < *smallest)
        *smallest = current;
}

int main()
{
    int R, C, rowi = 0;
    string line, smallest = "zzzzzzzzzzzzzzzzzzzz";
    cin >> R >> C;
    char* chars = new char[R];
    string* rows = new string[R];

    for(int i = 0; i < R; i++)
    {
        cin >> line; 
        rows[rowi++] = line;
        splitcompare(line, &smallest);
    }
    for(int i = 0; i < C; i++)
    {
        for(int j = 0; j < R; j++)
        {
            chars[j] = rows[j][i];
        }
        string line (chars, R);
        splitcompare(line, &smallest);
    }
    cout << smallest;
    return 0;
}
