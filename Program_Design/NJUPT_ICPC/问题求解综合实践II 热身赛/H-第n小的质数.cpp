#include<iostream>

using namespace std;

const int N = 10010, M = 110000;

int n;
int primes[N], cnt;
bool st[M];

int get_primes(int a)
{
	for(int i = 2; i <= M; i++)
	{
		if(!st[i])
		{
			primes[cnt++] = i;
			if(cnt == a)
			{
				return i;
			}
		}
		for(int j = 0; primes[j] <= M / i; j++)
		{
			st[primes[j] * i] = true;
			if(i % primes[j] == 0) break;
		}
	}
}

int main()
{
	cin >> n;
	cout << get_primes(n);
	return 0;
}
