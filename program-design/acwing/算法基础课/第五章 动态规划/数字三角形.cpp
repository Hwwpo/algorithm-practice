#include<iostream>
#include<algorithm>

using namespace std;

const int N = 510, INF = 1e9;

int n;
int a[N][N];
int f[N][N];

int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= i; j++)
			cin >> a[i][j];
	
	for(int i = 1; i <= n; i++)
		for(int j = 0; j <= i + 1; j++)
			f[i][j] = -INF;
	
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= i; j++)
			f[i][j] = max(f[i - 1][j - 1] + a[i][j], f[i][j - 1] + a[i][j]);
	
	int res = -INF;
	for(int i = 1; i <= n; i++) res = max(res, f[n][i]);
	
	cout << res << endl;
	return 0;
}
