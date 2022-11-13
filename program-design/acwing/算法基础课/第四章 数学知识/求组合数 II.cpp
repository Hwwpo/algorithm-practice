#include<bits/stdc++.h>

using namespace std;

const int N = 100010, mod = 1e9 + 7;

typedef long long LL;


int fact[N];
int infact[N];

int qmi(int a, int k, int p)
{
	int res = 1;
	while(k)
	{
		if(k & 1) res = (LL) res * a % p;
		a = (LL)a * a % p;
		k >>= 1;
	}
	return res;
}

void Init()
{
	fact[0] = infact[0] = 1;
	for(int i = 1; i < N; i++)
	{
		fact[i] = (LL)fact[i - 1] * i % mod;
		infact[i] = (LL)infact[i - 1] * qmi(i, mod - 2, mod) % mod;
	}
}

int main()
{
	int n;
	cin >> n;
	Init();
	while(n--)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		printf("%d\n", (LL)fact[a] * infact[a - b] % mod * infact[b] % mod);
	}
	return 0;
}
