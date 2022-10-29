#include<iostream>

using namespace std;

const int N = 1e5 + 10;

int n, m;
int a[N], b[N];

int main()
{
	scanf("%d%d", &n, &m);
	for(int i = 0; i < n; i ++) scanf("%d", &a[i]);
	for(int i = 0; i < m; i ++) scanf("%d", &b[i]);
	
	for(int i = 0, j = 0; i < m; i++)
	{
		if(a[j] == b[i])
		{
			j++;
		}
		if(j == n)
		{
			puts("Yes");
			return 0;
		}
	}	
	puts("No");
	return 0;
 } 
