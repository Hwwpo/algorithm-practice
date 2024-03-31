#include<bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;

typedef unsigned long long LL;

int main()
{
	int n;
	cin >> n;
	
	unordered_map<int, int> primes;
	
	while(n--)
	{
		int x;
		cin >> x;
		
		for(int i = 2; i <= x / i; i++)
		{
			while(x % i == 0)
			{
				x /= i;
				primes[i]++; 
			}
		}
		
		if(x > 1) primes[x] ++;
	}
	
	LL res = 1;
	
	for(auto prime : primes)
	{
		LL p = prime.first, a = prime.second;
		LL t = 1;
		while(a--)
		{
			t = (t * p + 1) % mod;
		}
		res = res * t % mod;
	}
	
	cout << res <<endl;
	
	return 0;
}
