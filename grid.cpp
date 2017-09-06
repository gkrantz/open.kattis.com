#include <iostream>
#include <list>

int main()
{
	int n, m;
	char temp;
	std::cin >> n >> m;
	int input[n*m] = {};
	int visited[n*m] = {};
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cin >> temp;
			input[i*m+j] = temp - '0';
		}
	}

	std::list<int> queue;
	visited[0] = 1;
	queue.push_back(0);
	int goal = n*m-1;

	while(!queue.empty())
	{
		int current = queue.front();
		queue.pop_front();
		if (current == goal)
		{
			std::cout << visited[current]-1;
			return 0;
		}

	    if (current+input[current]*m <= goal)
	    {
	    	if (visited[current+input[current]*m] == 0)
	    	{
	    		visited[current+input[current]*m] = visited[current] + 1;
	    		queue.push_back(current+input[current]*m);
	    	}
	    }
	    if (current % m + input[current] < m)
	    {
	    	if (visited[current+input[current]] == 0)
	    	{
		    	visited[current+input[current]] = visited[current] + 1;
		    	queue.push_back(current+input[current]);
		    }
	    }
	    if (current-input[current]*m > -1)
	    {
	    	if (visited[current-input[current]*m] == 0)
	    	{
		    	visited[current-input[current]*m] = visited[current] + 1;
		    	queue.push_back(current-input[current]*m);
		    }
	    }
	    if (current % m - input[current] > -1)
	    {
	    	if (visited[current-input[current]] == 0)
	    	{
		    	visited[current-input[current]] = visited[current] + 1;
		    	queue.push_back(current-input[current]);
		    }
	    }
	}
	std::cout << -1;
	return 0;
}