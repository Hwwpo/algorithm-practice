#include <bits/stdc++.h>

using namespace std;

bool prime(int a)
{
	if(a < 2) return false;
	for(int i = 2; i <= a / i; i++)
	{
		if(a % i == 0) return false;
	}
	return true;
}

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		int a;
		cin >> a;
		if(prime(a)) puts("Yes");
		else puts("No");
	}
	
	return 0;
}
