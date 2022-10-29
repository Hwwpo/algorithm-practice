#include<iostream>

using namespace std;

const int N = 20;

int n;
char p[N][N];
bool col[N], dg[N], udg[N];

void dfs(int u)
{
	if(u == n)
	{
		for(int i = 0; i < n; i++) puts(p[i]);
		puts("");
		return;
	}
	
	for(int i = 0; i < n; i++)
	{
		if(!col[i] && !dg[u + i] && !udg[u - i + n])
		{
			p[u][i] = 'Q';
			col[i] = dg[u + i] = udg[u - i + n] = true;
			dfs(u + 1);
			col[i] = dg[u + i] = udg[u - i + n] = false;
			p[u][i] = '.';
		}
	}
}


int main()
{
	scanf("%d", &n);
	for(int i = 0; i < n;i ++)
		for(int j = 0; j < n; j++)
			p[i][j] = '.';
	
	dfs(0);
	
	return 0;
}
