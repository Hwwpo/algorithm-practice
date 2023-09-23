#include<bits/stdc++.h>

using namespace std;

const int N = 110;
typedef long long LL;
int n, k;
int a[N][N];
LL f[N][N][N * N / 2];



int main()
{
	cin >> n >> k;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			cin >> a[i][j];
		}
	}
	for(int i = 2; i <= n; i++)
		for(int j = 1; j <= i; j++)
			for(int l = 1; l <= k; l++)
				f[i][j][l] = LONG_LONG_MIN;
	f[1][1][0] = a[1][1], f[1][1][1] = a[1][1] * 3;
	for(int i = 2; i <= n; i++)
		for(int j = 1; j <= i; j++)
			f[i][j][0] = max(f[i - 1][j][0], f[i - 1][j - 1][0]) + a[i][j];
	
	for(int i = 2; i <= n; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			for(int l = 1; l <= k; l++)
			{
				f[i][j][l] = max(max(f[i - 1][j][l], f[i - 1][j - 1][l]) + a[i][j], max(f[i - 1][j][l-1], f[i - 1][j - 1][l-1]) + 3 * a[i][j]);
			}
		}
	}
	LL temp = -0x3f3f3f3f;
	for(int i = 1; i <= n; i++)
	{
		for(int l = 0; l <= k; l++)
		{
			if(f[n][i][l] > temp)
			{
			temp = f[n][i][l];
			}
		}
	}
	cout << temp;
	return 0;
}
