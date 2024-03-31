#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

const int N = 10;

int n;
int st[N];
int used[N];

void dfs(int u)
{
	if(u > n)
	{
		for(int i = 1; i <= n; i++) printf("%d ", st[i]);
		puts("");
		return;
	}
	
	for(int i = 1; i <= n; i++)
	{
		if(!used[i])
		{
			st[u] = i;
			used[i] = true;
			
			dfs(u + 1);
			
			st[u] = 0;
			used[i] = false;
		}
	}
}

int main()
{
	cin >> n;
	
	dfs(1);
	
	return 0;
}
