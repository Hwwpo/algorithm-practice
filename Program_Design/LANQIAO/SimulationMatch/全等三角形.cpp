#include<iostream>

using namespace std;

const int N = 110;

int n, m;
char a[N][N];
int len;
int res;

int check(int i, int j, int dx, int dy)
{
	char ch = a[i][j];
	for(int k = 0; k < len - 1; k++)
	{
		i += dx;
		j += dy;
		if(i < 0 || i > n - 1 || j < 0 || j > m - 1) return 0;
		if(ch != a[i][j]) return 0;
	}
	return 1;
}
int main()
{
	cin >> n >> m;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			cin >> a[i][j];
	
	for(len = min(n, m); len > 1; len--)
	{
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++)
			{
				res += (check(i, j, -1, 0) && check(i, j, 0, -1) && check(i - len + 1, j, 1, -1));
				res += (check(i, j, 1, 0) && check(i, j, 0, -1) && check(i + len - 1, j, -1, -1));
				res += (check(i, j, -1, 0) && check(i, j, 0, 1) && check(i - len + 1, j, 1, 1));
				res += (check(i, j, 1, 0) && check(i, j, 0, 1) && check(i + len - 1, j, -1, 1));
			}
		}
	}
	cout << res; 
	return 0;
}
