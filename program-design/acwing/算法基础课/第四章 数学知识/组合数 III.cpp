#include<bits/stdc++.h>

using namespace std;

const int N = 5010;

typedef long long LL;

int p;

int qmi(int a, int k)
{
	int res = 1;
	while(k)
	{
		if(k & 1) res = (LL)res * a % p;
		a = (LL)a * a;
		k >>= 1;
	}
	return res;
}

int C(int a, int b)
{
	int res = 1;
	for(int i = 1, j = a; i <= b; i++, j--)
	{
		res = res * j % p;
		res = res * qmi(i, p - 2) % p;
	}
	return res;
}

int lucas(int a, int b)
{
	if(a < p) return C(a, b);
	else return C(a % p, b % p) * lucas(a / p, b / p) % p;
}

int main()
{
	int n;
	LL a, b;
	while(n--)
	{
		cin >> a >> b >> p;
		cout << lucas(a, b) << endl;
	}
	return 0;
}
