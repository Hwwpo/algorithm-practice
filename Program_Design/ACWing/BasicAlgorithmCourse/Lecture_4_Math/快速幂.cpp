#include<bits/stdc++.h>

using namespace std;

typedef long long LL;

LL qmi(int a, int k, int p)
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
		int a, b, p;
		cin >> a >> b >> p;
		cout << qmi(a, b, p) << endl;
	}
	return 0;
}
