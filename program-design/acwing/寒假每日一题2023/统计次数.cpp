#include<iostream>

using namespace std;

int main()
{
	int n, k;
	int res = 0;
	cin >> n >> k;
	for(int i = 1; i <= n; i++)
	{
		int t = i;
		while(t)
		{
			res += (t % 10 == k) ? 1 : 0;
			t /= 10;
		}
	}
	
	cout << res << endl;
	return 0;
}
