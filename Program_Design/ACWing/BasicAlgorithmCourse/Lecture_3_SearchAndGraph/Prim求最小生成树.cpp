#include <bits/stdc++.h>

using namespace std;

const int N = 510, M = 100010;

int n, m;
int g[N][N];
int dist[N];
bool st[N];

int prim()
{
	memset(dist, 0x3f, sizeof dist);
	
	int res = 0;
	for(int i = 0; i < n; i++)
	{
		int t = -1;
		for(int j = 1; j <= n; j++)
			if(!st[j] && (t == -1 || dist[t] > dist[j]))
				t = j;
		if(i && dist[t] == 0x3f3f3f3f) return 0x3f3f3f3f;
		
		if(i) res += dist[t];
		st[t] = true;
		for(int j = 1; j <= n; j++) dist[j] = min(dist[j], g[t][j]);
	 }
	return res;
}


int main()
{
	scanf("%d%d", &n, &m);
	memset(g, 0x3f, sizeof g);
	int a, b, c;
	while(m--)
	{
		scanf("%d%d%d", &a, &b, &c);
		g[a][b] = g[b][a] = min(g[a][b], c);
	}
	
	int t = prim();
	
	if(t == 0x3f3f3f3f) puts("impossible");
	else printf("%d\n", t);
	return 0;
}
