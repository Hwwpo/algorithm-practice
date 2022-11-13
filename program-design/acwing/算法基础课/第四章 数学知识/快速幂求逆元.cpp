#include<bits/stdc++.h>

using namespace std;

typedef long long LL;

LL qmi(int a, int k ,int p)
{
	LL res = 1;
	while(k)
	{
		if(k & 1) res = (LL)res * a % p;
		k >>= 1;
		a = (LL)a * a % p;
	}
	return res;
}

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		int a, p;
		cin >> a >> p;
		if(a % p == 0) puts("impossible");
		else cout << qmi(a, p - 2, p) << endl;
	}
	return 0;
}
