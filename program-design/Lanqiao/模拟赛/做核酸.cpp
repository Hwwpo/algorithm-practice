#include<iostream>

using namespace std;

int s, t;

int main()
{
	cin >> s >> t;
	int res;
	if(s < t)
	{
		res = t - s;
	}
	else
	{
		res = (7 - s) + t;
	}
	cout << res << endl;
	return 0;
}
