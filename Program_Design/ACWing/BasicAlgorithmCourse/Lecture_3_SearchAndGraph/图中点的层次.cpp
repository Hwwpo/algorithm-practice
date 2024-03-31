#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

const int N = 100010, M = 2 * N;

int n, m;
int h[N], e[M], ne[M], idx;
int p[N], d[N];

void add(int a, int b)
{
	e[idx] = b, ne[idx] = h[a], h[a] = idx++;
}

int bfs()
{
	memset(d, -1, sizeof d);
	int hh = 0, tt = -1;
	p[++tt] = 1;
	d[1] = 0;
	while(hh <= tt)
	{
		int t = p[hh++];
		for(int i = h[t]; i != -1; i = ne[i])
		{
			int j = e[i];
			if(d[j] == -1)
			{
				d[j] = d[t] + 1;
				p[++tt] = j;
			}
		}
	}
	return d[n];
}

int main()
{
	cin >> n >> m;
	memset(h, -1, sizeof h);
	while(m--)
	{
		int a, b;
		cin >> a >> b;
		add(a, b);
	}
	cout << bfs();
	return 0;
}
