#include<bits/stdc++.h>

using namespace std;

int n, m;
int s[110][110], t[110][110];

int main()
{
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++)
			cin >> s[i][j];
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++)
			t[i][j] = t[i - 1][j] + t[i][j - 1] - t[i - 1][j - 1] + s[i][j];
	int res;
	for(res = min(n, m); i > 0; res--)
	{
		for(int i = res; i <= n; i++)
		{
			for(int j = res; j <= m; j++)
			{
				int sum = t[i][j] - t[i - res][j] - t[i][j - res] + t[i - res][j - res];
				if(sum == res * res)
				{
					cout << res;
					return 0;
				}
			}
		}
	}
	return 0;
}
