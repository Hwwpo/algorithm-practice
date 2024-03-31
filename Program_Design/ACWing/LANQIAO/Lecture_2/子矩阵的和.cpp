#include<bits/stdc++.h>

using namespace std;

const int N = 1010;

int n, m, Q;
int a[N][N];
int q[N][N];

int main()
{
	scanf("%d%d%d", &n, &m, &Q);
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			scanf("%d", &a[i][j]);
	
	q[0][0] = a[0][0];
	
	for(int i = 1; i < n; i++)
		q[i][0] = q[i - 1][0] + a[i][0];
	for(int j = 1; j < m; j++)
		q[0][j] = q[0][j - 1] + a[0][j];
	
	for(int i = 1; i < n; i++)
		for(int j = 1; j < m; j++)
			q[i][j] = q[i - 1][j] + q[i][j - 1] - q[i - 1][j - 1] + a[i][j];
	
	while(Q--)
	{
		int x1, x2, y1, y2;
		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
		cout << q[x2 - 1][y2 - 1] - q[x1 - 2][y2 - 1] - q[x2 - 1][y1 - 2] + q[x1 - 2][y1 - 2] << endl;
	 } 
	 return 0;
}
