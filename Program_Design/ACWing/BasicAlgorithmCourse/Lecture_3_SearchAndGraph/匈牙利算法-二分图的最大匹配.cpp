#include <bits/stdc++.h>

using namespace std;

const int N = 510, M = 100010;

int n1, n2, m;
int h[N], e[M], ne[M], idx;
int match[N];
bool st[N];

bool find(int x)
{
	
	for(int i = h[x]; ~i; i = ne[i])
	{
		int j = e[i];
		if(!st[j])
		{
			st[j] = true;
			if((match[j] == 0 || find(match[j])))
			{
				match[j] = x;
				return true;
			}
		}
	}
	return false;
}

void add(int a, int b)
{
	e[idx] = b, ne[idx] = h[a], h[a] = idx++;
}
int main()
{
	scanf("%d%d%d", &n1, &n2, &m);
	
	memset(h, -1, sizeof h);
	
	for(int i = 0; i < m; i++)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		add(a, b);
	}
	int res = 0;
	for(int i = 1; i <= n1; i++)
	{
		memset(st, false, sizeof st);
		if(find(i)) res ++;
	}
	
	printf("%d", res);
	return 0;
}
