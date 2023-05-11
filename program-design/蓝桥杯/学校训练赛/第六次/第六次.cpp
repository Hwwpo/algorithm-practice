#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;
const int N = 55;


int n, m;
int a[N][N];
int f[N][N];
int st[N][N];

vector<PII> r;

void find(int n, int m)
{
	if(n == 0 || m == 0) return;
	
	a[n][m] = 0;
	
	if(f[n - 1][m] > f[n][m - 1]) find(n-1, m);
	else find(n, m-1);
}

int main()
{
	cin >> n >> m;
	int res = 0;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++)
			cin >> a[i][j];
			
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			f[i][j] = max(f[i - 1][j], f[i][j - 1]) + a[i][j];
		}
	}
	res += f[n][m];
	find(n, m);
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++)
			f[i][j] = 0;
	
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			f[i][j] = max(f[i - 1][j], f[i][j - 1]) + a[i][j];
		}
	}
	res += f[n][m];
	cout << res;
	return 0;
 } 
