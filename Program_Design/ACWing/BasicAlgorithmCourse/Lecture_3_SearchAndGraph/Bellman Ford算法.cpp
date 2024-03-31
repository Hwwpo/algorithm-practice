#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 510, M = 10010;

int n, m, k;
int dist[N], backup[N];

struct Edge
{
	int a, b, w;
}Edges[M];

int bellman_ford()
{
	memset(dist, 0x3f, sizeof dist);
	dist[1] = 0;
	while(k--)
	{
		memcpy(backup, dist, sizeof dist);
		for(int i = 0; i < m; i++)
		{
			int a = Edges[i].a, b = Edges[i].b, w = Edges[i].w;
			dist[b] = min(dist[b], backup[a] + w);
		}
	}
	
	if(dist[n] > 0x3f3f3f3f / 2) return 0x3f3f3f3f;
	else return dist[n];
}


int main()
{
	scanf("%d%d%d", &n, &m, &k);
	
	for(int i = 0; i < m; i++)
	{
		int x, y, z;
		scanf("%d%d%d", &x, &y, &z);
		Edges[i] = {x, y, z};
	}
	
	int t = bellman_ford();
	if(t == 0x3f3f3f3f) puts("impossible");
	else printf("%d", t);
	return 0;
}
