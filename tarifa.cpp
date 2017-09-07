#include <iostream>

using namespace std;

int main() {
	int mega, months, temp, total = 0;
	cin >> mega;
	cin >> months;
	total = mega*months+mega;
	for (int i = 0; i < months; ++i)
	{
		cin >> temp;
		total -= temp;
	}
	cout << total;
	return 0;
}