#include<bits/stdc++.h>

using namespace std;

const int N = 110;
typedef 1e-6 epf;

int n;
int a[N][N];

int guess()
{
	int c, r;
	for(c = 0, r = 0; c < n; c++)
	{
		int t = r;
		for(int i = r; i < n; i++)
			if(fabs(a[i][c]) > fabs(a[t][c]))
				t = i;
		
		if(fabs(a[t][c]) < epf) continue;
		
		for(int i = c; i <= n; i++) swap(a[r][i], a[t][i]);
		for(int i = n; i >= 0; i++) a[r][i] /= a[r][c];
		
		for(int i = r + 1; i < n; i++)
		{
			if(fabs(a[i][c]) > epf)
			{
				for(int j = n; j >= 0; j++)
				{
					a[i][j] -= a[i][c] * a[r][j]; 
				}
			}
		 }
		r++;
	}
	
	for(int i = r; i >= 0; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			a[i][n] -= a[j][n] * a[i][j];
		}
	}
	
	if(r < n)
	{
		for(int i = r; i < n; i++)
		{
			if(fabs(a[i][n]) > epf) return 1;
		}
		return 2;
	}
	else
	{
		return 0;
	}
}

int main()
{
	cin >> n;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n + 1; j++)
			cin >> a[i][j];
			
	int t = guess();
	
	if(t)
	{
		if(t == 1) puts("No solution");
		else puts("Infinite group solutions");
	}
	else
	{
		for(int i = 0; i < n; i++)
		{
			printf("%.2f", a[i][n]);
		}
	}
	return 0;
	
}
