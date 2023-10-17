#include<bits/stdc++.h>

using namespace std;

int k, n; 
int gcd(int n, int m)
{
	if(m == 0) return n;
	return gcd(m, n % m);
}

int main()
{
	cin >> n >> k;
	int i = 1;
	while(k > 0)
	{
		if(gcd(i, n) == 1) k--;
		i++;
	}
	cout << i - 1;
	return 0;
}
