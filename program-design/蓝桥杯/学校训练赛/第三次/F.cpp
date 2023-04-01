#include<bits/stdc++.h>

using namespace std;

int n;
int place[30];
int flag[30];

long long res = 0;
int dfs(int n, int num)
{
	if(num > n)
	{
		res++;
		return 0;
	}
	
	for(int i = 1; i <= n; i++)
	{
		if(!flag[i] && num != i)
		{
			place[num] = i;
			flag[i] = 1;
			dfs(n, num + 1);
			flag[i] = 0;
		}
	}
}

int main()
{
	cin >> n;

	dfs(n, 1);
	
	cout << res;
}
