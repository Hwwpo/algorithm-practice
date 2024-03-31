#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

const int N = 100010, M = 2 * N;

int n, m;
int h[N], e[M], ne[M], idx;
int q[N], d[N];

void add(int a, int b)
{
	e[idx] = b, ne[idx] = h[a], h[a] = idx ++;
}

bool bfs()
{
	int hh = 0, tt = -1;
	for(int i = 1; i <= n; i++)
	{
		if(d[i] == 0) q[++tt] = i;
	}
	
	while(hh <= tt)
	{
		int t = q[hh++];
		for(int i = h[t]; i != -1; i = ne[i])
		{
			int j = e[i];
			d[j]--;
			if(d[j] == 0) q[++tt] = j;
		}
	}
	return tt == n - 1;
}
int main()
{
	memset(h, -1, sizeof h);
	cin >> n >> m;
	while(m--)
	{
		int a, b;
		cin >> a >> b;
		add(a, b);
		d[b]++; 
	}
	if(bfs())
		for(int i = 0; i < n; i++) cout << q[i] << ' ';
	else puts("-1");
}
