#include<bits/stdc++.h>

using namespace std;

const int N = 110;

int a[N][N], s[N][N];
 
int main()
{
	a[1][1] = 1;
	for(int i = 2; i <= 100; i++) a[1][i] = a[1][i - 1] + 2;
	for(int i = 2; i <= 100; i++)
	{
		a[i][1] = a[i - 1][1] + 1;
		for(int j = 2; j <= 100; j++)
		{
			a[i][j] = a[i][j - 1] + 2;
		}
	}
	for(int i = 1; i <= 100; i++)
	{
		for(int j = 1; j <= 100; j++)
		{
			s[i][j] = s[i-1][j] + s[i][j-1] - s[i-1][j-1] + a[i][j];
		}
	}
	cout << a[2][87]
	int Min = 0x3f3f3f3f;
	for(int x1 = 1; x1 <= 100; x1++)
	{
		for(int y1 = 1; y1 <= 100; y1++)
		{
			for(int x2 = x1; x2 <= 100; x2++)
			{
				for(int y2 = y1; y2 <= 100; y2++)
				{
					int sum = s[x2][y2] - s[x1-1][y2] - s[x2][y1-1] + s[x1-1][y1-1];
					if(sum == 2022)
					{
						Min = min(Min, (x2-x1+1)*(y2-y1+1));
//						cout << x2 << ' ' << y2 << ' ' << x1 << ' ' << y1 << ' ' << (x2-x1+1)*(y2-y1+1) << endl;
					}
				}
			}
		}
	}
	cout << Min;
	return 0;
}
