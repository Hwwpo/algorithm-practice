#include <bits/stdc++.h>

using namespace std;

const int N = 100010, M = 200010;

int n, m;
struct Edge
{
	int a, b, w;
	
	bool operator < (const Edge &W) const
	{
		return w < W.w;
	}
}Edges[M];
int p[N];

int find(int x)
{
	if(p[x] != x) p[x] = find(p[x]);
	return p[x];
}

int main()
{
	scanf("%d%d", &n, &m);
	
	for(int i = 0; i < m; i++)
	{
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		Edges[i] = {a, b, c};
	}
	
	for(int i = 0; i < m; i++) p[i] = i;
	sort(Edges, Edges + m);
	int res = 0, cnt = 0;
	for(int i = 0; i < m; i++)
	{
		int a = Edges[i].a, b = Edges[i].b, w = Edges[i].w;
		if(find(a) != find(b))
		{
			p[find(a)] = find(b);
			res += w;
			cnt++;
		}
	}
	if(cnt < n - 1) puts("impossible");
	else printf("%d\n", res);
}
