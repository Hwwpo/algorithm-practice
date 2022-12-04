#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

const int N = 25;

int n, m;
int st[N];
int used[N];

void dfs(int u)
{
	if(u > m)
	{
		for(int i = 1; i <= m; i++) printf("%d ", st[i]);
		puts("");
		return;
	}
	
	for(int i = st[u - 1]; i <= n; i++)
	{
		if(!used[i] && i)
		{
			used[i] = true;
			st[u] = i;
			
			dfs(u + 1);
			
			st[u] = 0;
			used[i] = false;
		}
	}
}

int main()
{
	cin >> n >> m;
	
	dfs(1);
	
	return 0;
}
