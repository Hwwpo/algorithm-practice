#include <bits/stdc++.h>

using namespace std;

const int N = 100010;

int n, m;
int h[N], e[N], ne[N], idx;
int color[N];

void add(int a, int b)
{
	e[idx] = b, ne[idx] = h[a], h[a] = idx++;
}

bool dfs(int u, int c)
{
	color[u] = c;
	for(int i = h[u]; ~i; i = ne[i])
	{
		int j = e[i];
		if(!color[j])
		{
			if(!dfs(j, 3 - c)) return false;
		}
		else if(color[j] == c) return false;
	}
	return true;
} 
int main()
{
	scanf("%d%d", &n, &m);
	
	while(m--)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		add(a, b), add(b, a);
	}
	
	int flag = true;
	for(int i = 1; i <= n; i++)
	{
		if(!color[i])
		{
			if(!dfs(i, 1))
			{
				flag = false;
				break;
			}
		}
	}
	
	if(flag) puts("Yes");
	else puts("No");
	return 0;
}
