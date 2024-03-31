#include<bits/stdc++.h>

using namespace std;

const int N = 2010, M = 10010;

int n, m;
int h[N], ne[M], e[M], w[N], idx;
int dist[N], cnt[N];
bool st[N];

void add(int a, int b, int c)
{
	e[idx] = b, w[idx] = c, ne[idx] = h[a], h[a] = idx++;
}

bool spfa()
{
	memset(dist, 0x3f, sizeof dist);
	dist[1] = 0;
	queue<int> p;
	for(int i = 1; i <= n; i++)
	{
		p.push(i);;
		st[i] = true;
	}
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
				cnt[j]++;
				if(cnt[j] >= n) return true;
				if(!st[j])
				{
					p.push(j);
					st[j] = true;
				}
			}
		}
	}
	return false;
}

int main()
{
	scanf("%d%d", &n, &m);
	
	memset(h, -1, sizeof h);
	int x, y, z;
	for(int i = 0; i < m; i++)
	{
		scanf("%d%d%d", &x, &y, &z);
		add(x, y, z);
	}
	
	if(spfa()) puts("Yes");
	else puts("No");
	return 0;
}
