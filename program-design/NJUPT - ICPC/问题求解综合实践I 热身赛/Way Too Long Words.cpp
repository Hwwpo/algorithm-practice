#include<bits/stdc++.h>

using namespace std;

int n;

int main()
{
	string a;
	cin >> n;
	while(n--)
	{
		cin >> a;
		if(a.size() <= 10)
		{
			cout << a << endl;
		}
		else
		{
			cout << a[0] << a.size() - 2 << a[a.size() - 1] << endl;
		}
	}
	return 0;
}
