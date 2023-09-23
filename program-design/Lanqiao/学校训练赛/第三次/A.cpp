#include<bits/stdc++.h>

using namespace std;

int a;
int b;

int judge(int n)
{
	vector<int> a;
	while(n)
	{
		a.push_back(n % 10);
		n /= 10;
	}
	for(int i = 0; i < a.size() - 1; i++)
	{
		if(abs(a[i] - a[i + 1]) < 3)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	cin >> a >> b;
	int res = 0;
	for(int i = a; i <= b; i++)
	{
		if(judge(i))
		{
			res++;
		}
	}
	cout << res;
}
