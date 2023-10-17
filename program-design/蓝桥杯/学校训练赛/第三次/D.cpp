#include<bits/stdc++.h>

using namespace std;

string a;

int fun(int l, int r)
{
	unordered_map<char, int> s;
	int res = 0;
	for(int i = l; i <= r; i++)
	{
		s[a[i]]++;
	}
	for(char i = 'a'; i <= 'z'; i++)
	{
		if(s[i] == 1)
		{
			res++;
		}
	}
	return res;
}

int main()
{
	cin >> a;
	int res = 0;
	for(int l = 0; l < a.length(); l++)
	{
		for(int r = l; r < a.length(); r++)
		{
			res += fun(l, r);
		}
	}
	fun(0, 2);
	cout << res;
}
