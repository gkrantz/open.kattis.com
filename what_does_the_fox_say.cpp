#include <iostream>
#include <stdlib.h> 
#include <algorithm> 
#include <string> 
#include <sstream>
#include <unordered_set>

using namespace std;
//globals
int main()
{
    int n;
    cin >> n;
    string recording, line;
    getline(cin, recording);
    for(int k = 0; k < n; k++)
    {
        getline(cin, recording);
        unordered_set<string> animalsounds;
        string word;
        line = "";
        while(line != "what does the fox say?")
        {
            istringstream iss(line);
            iss >> word >> word >> word;
            animalsounds.insert(word);
            getline(cin, line);
        }
        istringstream iss(recording);
        while(iss >> word)
        {
            unordered_set<string>::const_iterator it = animalsounds.find (word);
            if (it == animalsounds.end())
            {
                cout << word << " ";
            }
        }
        cout << endl;
    }
    return 0;
}