#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
const int N = 100010;
int n, k;
int a[N];
int f[N];
int res[N];
LL ans = 0;
int main()
{
	scanf("%d%d", &n, &k);
	scanf("%d", &a[0]);
	f[0] = a[0] % k;
	for(int i = 1; i < n; i++)
	{
		scanf("%d", &a[i]);
		f[i] = (f[i - 1] + a[i])%k;
		
	}
	for(int i = 0; i < n; i++)
	{
		res[f[i]]++;
	}
	for(int i = 0; i < k; i++)
	{
		ans += (LL)res[i] * (res[i] - 1) / 2;
	}
	cout << ans + res[0];
	
	return 0;
}
