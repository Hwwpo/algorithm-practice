#include<cstring>
#include<iostream>
#include<algorithm>

using namespace std;

const int N = 6010;

int n;
int happy[N];
int h[N], e[N], ne[N], idx;
int f[N][2];
bool has_boss[N];

void add(int a, int b)
{
	e[idx] = b, ne[idx] = h[a], h[a] = idx++;
}

void dfs(int n)
{
	f[n][1] = happy[n];
	
	for(int i = h[n]; ~i; i = ne[i])
	{
		int j = e[i];
		
		dfs(j);
		
		f[n][0] += max(f[j][0], f[j][1]);
		f[n][1] += f[j][0];
	}
}

int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++) scanf("%d", &shappy[i]);
	
	memset(h, -1, sizeof h);
	
	for(int i = 0; i < n - 1; i++)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		has_boss[a] = true;
		add(b, a);
	}
	
	int root = 1;
	while(has_boss[root]) root++;
	
	dfs(root);
	
	cout << max(f[root][1], f[root][0]) << endl;
	return 0;
}
