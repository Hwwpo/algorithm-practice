#include<bits/stdc++.h>

using namespace std;

int qmi(int a, int n)
{
	int res = 1;
	while(n)
	{
		if(n & 1) res = res * a;
		n >>= 1;
		a = a * a;
	}
	return res;
}

int judge(int n)
{
	int count = 0;
	while(n)
	{
		n /= 10;
		count++;
	}
	return count;
}
int main()
{
	int n;
	cin >> n;
	int x = 1;
	while(judge(qmi(x, x)) < n)
	{
		cout << qmi(x, x) << endl;;
		x++;
	}
	cout << x;
	return 0;
}
