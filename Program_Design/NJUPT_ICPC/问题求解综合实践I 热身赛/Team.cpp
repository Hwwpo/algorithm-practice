#include<bits/stdc++.h>

using namespace std;

int n;

int main()
{
	int n;
	cin >> n;
	int a, b, c;
	int res = 0;
	while(n--)
	{
		cin >> a >> b >> c;
		if(a + b + c >= 2) res++;
	}
	cout << res << endl;
	return 0;
 } 
