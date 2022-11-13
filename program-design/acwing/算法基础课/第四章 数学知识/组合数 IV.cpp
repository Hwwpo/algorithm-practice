#include <bits/stdc++.h>

using namespace std;

const int N = 5010;

int primes[N], cnt;
bool st[N];
int sum[N];

void get_primes(int n)
{
	for(int i = 2; i <= n; i++)
	{
		if(!st[i]) primes[cnt++] = i;
		for(int j = 0; primes[j] <= n / i; j++)
		{
			st[primes[j] * i] = true;
			if(i % primes[j] == 0) break;
		}
	}
}

int get(int n, int p)
{
	int res = 0;
	while(n)
	{
		res += n / p;
		n /= p;
	}
	return res;
}

vector<int> mul(vector<int> a, int b)
{
	vector<int> c;
	int t = 0;
	for(int i = 0; i < a.size(); i++)
	{
		t += a[i] * b;
		c.push_back(t % 10);
		t /= 10;
	}
	
	while(t)
	{
		c.push_back(t % 10);
		t /= 10;
	}
	
	return c;
}

int main()
{
	int a, b;
	cin >> a >>b;
	
	get_primes(a);
	
	for(int i = 0; i < cnt; i++)
	{
		int p = primes[i];
		sum[i] = get(a, p) - get(b, p) - get(a - b, p);
	}
	
	vector<int> ans;
	ans.push_back(1);
	for(int i = 0; i < cnt; i++)
	{
		for(int j = 0; j < sum[i]; j++)
		{
			ans = mul(ans, primes[i]);
		}
	}
	
	for(int i = ans.size() - 1; i >= 0; i--)
	{
		printf("%d", ans[i]);
	}
	return 0;
 } 
