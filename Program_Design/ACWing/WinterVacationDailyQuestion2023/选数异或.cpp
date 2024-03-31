#include<bits/stdc++.h>

using namespace std;

const int N = 100010;

int n, m, x;
int dp[N];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	unordered_map<int, int> la;
	
	cin >> n >> m >> x;
	
	
	for(int i = 1; i <= n; i++)
	{
		int a;
		cin >> a;
		la[a] = i;
		
		dp[i] = max(dp[i - 1], la[a ^ x]);
	}
	while(m--)
	{
		int l, r;
		cin >> l >> r;
		if(dp[r] >= l) puts("yes");
		else puts("no");
	}
	return 0;
}
