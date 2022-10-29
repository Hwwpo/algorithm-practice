#include<iostream>

using namespace std;

const int N = 1e5 + 10, M = 31 * N;

int n;
int a[N];	// ´¢´æËùÓÐÊý
int son[M][2], idx = 0;

void insert(int n)
{
	int p = 0;
	for(int i = 30; i >= 0; i--)
	{
		int u = n >> i & 1;
		if(!son[p][u]) son[p][u] = ++idx;
		p = son[p][u];
	}
}

long long query(int n)
{
	int p = 0;
	long long res = 0;
	for(int i = 30; i >= 0; i--)
	{
		int u = n >> i & 1;
		if(son[p][!u])
		{
			p = son[p][!u];
			res = res * 2 + 1;
		}
		else
		{
			p = son[p][u];
			res = res * 2 + 0;
		}
		
	}
	return res;
}
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	for(int i = 0; i < n; i ++)
	{
		cin >> a[i];
		insert(a[i]);
	}
	long long res = 0;
	for(int i = 0; i < n; i++)
	{
		res = max(res, query(a[i]));
	}
	cout << res;
	
 } 
