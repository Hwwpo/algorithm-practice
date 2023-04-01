#include<iostream>

using namespace std;

typedef long long LL;

LL qmi(LL a, LL k, LL mod)
{
	LL res = 1;
	while(k)
	{
		if(k & 1) res = res * a % mod;
		k >>= 1;
		a = a * a % mod;
	}
	return res;
}

int main()
{
	LL n;
	cin >> n;
	LL mod = 6662333;
	cout << qmi(2, n-1, mod);
	return 0;
}
