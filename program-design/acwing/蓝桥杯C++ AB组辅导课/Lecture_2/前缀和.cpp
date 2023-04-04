#include<bits/stdc++.h>

using namespace std;

const int N = 100010;

int n, m;
int a[N];
int f[N];
int main()
{
	scanf("%d%d", &n, &m);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	f[0] = a[0];
	for(int i = 1; i < n; i++)
	{
		f[i] = f[i - 1] + a[i];
	}
	while(m--)
	{
		int l, r;
		scanf("%d%d", &l, &r);
		cout << f[r- 1] - f[l - 2] << endl;
	}
	return 0;
}

