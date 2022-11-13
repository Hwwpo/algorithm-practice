#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>

typedef pair<int, int> PII;

const int N = 150010;

int n, m;
int h[N], ne[N], w[N], e[N], idx;
int dist[N];
bool st[N];

void add(int a, int b, int c)
{
	e[idx] = b, w[idx] = c, ne[idx] = h[a], h[a] = idx++;
}

int dijkstra()
{
	memset(dist, 0x3f, sizeof dist);
	dist[1] = 0;
	
	priority_queue<PII, vector<PII>, greater<PII>> heap;
	heap.push({0, 1});
	
	while(heap.size())
	{
		auto t = heap.top();
		heap.pop();
		int ver = t.second, distance = t.first;
		if(st[ver]) continue;
		st[ver] = true;
		
		for(int i = h[ver]; ~i; i = ne[i])
		{
			int j = e[i];
			if(dist[j] > dist[ver] + w[ver])
			{
				dist[j] = dist[ver] + w[ver];
				heap.push(dist[j], j);
			}
		}
	}
	if(dist[n] == 0x3f3f3f3f) return -1;
	return dist[n];
}

int main()
{
	scanf("%d%d", &n , &m);
	
	memset(h, -1, sizeof h);
	
	int a, b, c;
	while(m--)
	{
		scanf("%d%d%d", &a, &b, &c);
		add(a, b, c);
	}
	
	int t = dijkstra();
	
	cout << t;
	return 0;
}
