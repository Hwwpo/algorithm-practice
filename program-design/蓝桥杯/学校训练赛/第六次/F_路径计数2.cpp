#include<bits/stdc++.h>
#define mod 100003

using namespace std;

const int N = 1010;

int n, m;
int a[N][N];
int f[N][N];

int main()
{
	int n;
	cin >> n >> m;
	
	while(m--)
	{
		int x, y;
		cin >> x >> y;
		a[x][y] = 1;
		f[x][y] = 0;
	}
	for(int i = 1; i <= n && a[1][i] == 0; i++)
	{
		f[1][i] = 1;
	}
	for(int i = 1; i <= n && a[i][1] == 0; i++)
	{
		f[i][1] = 1;
	}
	for(int i = 2; i <= n; i++)
	{
		for(int j = 2; j <= n; j++)
		{
			if(!a[i][j])
			{
				f[i][j] = (f[i - 1][j] + f[i][j - 1]) % mod;
			}
		 } 
	}
//	for(int i = 1; i <= n; i++)
//	{
//		for(int j = 1; j <= n; j++)
//		{
//			cout << f[i][j]<<' ';
//		}
//		cout << endl;
//	}
	
	
	cout << f[n][n];
	return 0;
}
