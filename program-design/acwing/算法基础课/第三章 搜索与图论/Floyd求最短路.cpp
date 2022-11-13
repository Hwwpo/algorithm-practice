#include<bits/stdc++.h>

using namespace std;

const int N = 210, INF = 0x3f3f3f3f;

int n, m, Q;
int d[N][N];

void floyd()
{
	for(int k = 1; k <= n; k++)
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= n; j++)
				d[i][j] = min(d[i][k] + d[k][j], d[i][j]);
}



int main()
{
	scanf("%d%d%d", &n, &m, &Q);
	int x, y, z;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <=n ; j++)
		{
			if(i == j) continue;
			d[i][j] = INF;
		}
	
	while(m--)
	{
		scanf("%d%d%d", &x, &y, &z);
		d[x][y] = min(d[x][y], z);	
	}
	
	floyd();
	
	while(Q--)
	{
		scanf("%d%d", &x, &y);
		if(d[x][y] > INF / 2) puts("impossible");
		else printf("%d\n", d[x][y]);
	}
	return 0;
 } 
