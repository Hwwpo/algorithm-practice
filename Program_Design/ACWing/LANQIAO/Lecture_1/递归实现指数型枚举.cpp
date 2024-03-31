#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

const int N = 10;

int n;
int st[N];

void dfs(int u)
{
	if(u > n)
	{
		for(int i = 1; i <= n; i++)
			if(st[i] == 1)
				printf("%d ", i);
			puts("");
	}
	
	st[u] = 2;
	dfs(u + 1);
	st[u] = 0;
	
	st[u] = 1;
	dfs(u + 1);
	st[u] = 0;
}

int main()
{
	cin >> n;
	
	dfs(1);
	
	return 0;
}
