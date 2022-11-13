#include <bits/stdc++.h>

using namespace std;

void get_prime(int a)
{
	int s = 0;
	for(int i = 2; i <= a / i; i++)
	{
		s = 0;
		if(a % i == 0)
		{
			while(a % i == 0)
			{
				a /= i;
				s++;
			}
			cout << i << ' ' << s << endl;
		}
	}
	if(a > 1) cout << a << ' ' << 1 << endl;
}

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		int a;
		cin >> a;
		get_prime(a);
		puts("");
	}
	return 0;
}
