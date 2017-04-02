#include <iostream>
#include <stdlib.h> 

int main()
{
	using namespace std;
	int P, K, N, S2, S3;
	cin >> P;
	for(int i = 0; i < P; i++)
	{
		cin >> K >> N;
		if (N)
		cout << K << " " << ((N+1)*N/2) << " " << N*N << " " << N*N+N;
		if (i < P-1)
			cout << "\n";
	}
	return 0;
}