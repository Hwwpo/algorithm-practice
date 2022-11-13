#include <bits/stdc++.h>

using namespace std;

const int N = 100010;

int n, m;
int h[N], e[N], ne[N], w[N], idx;
int dist[N];
bool st[N];

void add(int a, int b, int c)
{
	e[idx] = b, w[idx] = c, ne[idx] = h[a], h[a] = idx ++;
}

int spfa()
{
	memset(dist, 0x3f, sizeof dist);
	dist[1] = 0;
	queue<int> p;
	p.push(1);
	st[1] = true;
	while(p.size())
	{
		auto t = p.front();
		p.pop();
		
		st[t] = false;
		for(int i = h[t]; ~i; i = ne[i])
		{
			int j = e[i];
			if(dist[j] > dist[t] + w[i])
			{
				dist[j] = dist[t] + w[i];
				if(!st[j])
				{
					p.push(j);
					st[j] = true;
				}
			}
		}
	}
	
	if(dist[n] > 0x3f3f3f3f / 2) return 0x3f3f3f3f;
	else return dist[n];
}

int main()
{
	scanf("%d%d", &n, &m);
	
	memset(h, -1, sizeof h);
	
	for(int i = 0; i < m; i++)
	{
		int x, y, z;
		scanf("%d%d%d", &x, &y, &z);
		add(x, y, z);
	}
	
	int t = spfa();
	
	if(t == 0x3f3f3f3f) puts("impossible");
	else printf("%d", t);
	return 0;
 } 
