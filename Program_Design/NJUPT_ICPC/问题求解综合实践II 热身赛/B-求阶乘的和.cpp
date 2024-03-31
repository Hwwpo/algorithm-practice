#include<iostream>

typedef long long LL;

using namespace std;


int n;

LL get(int a)
{
	LL res = 1;
	for(int i = 1; i <= a; i++)
	{
		res *= i;
	}
	return res;
}

int main()
{
	cin >> n;
	LL res = 0;
	while(n > 0)
	{
		res += get(n);
		n--;
	}
	cout << res;
	return 0;
}
