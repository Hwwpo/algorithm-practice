#include<iostream>

using namespace std;

const int N = 5e5 + 10;

int n;
string a;
int l[N], r[N];

int main()
{
	cin >> n;
	cin >> a;
	
	for(int i = 0, g = 0, h = 0; i < n; i++)
	{
		if(a[i] == 'H')
		{
			l[i] = g;
			g = 0;
			h++;
		}
		else
		{
			l[i] = h;
			h = 0;
			g++;
		}
	}
	
	for(int i = n - 1, h = 0, g = 0; i >= 0; i--)
	{
		if(a[i] == 'H')
		{
			r[i] = g;
			g = 0;
			h++;
		}
		else
		{
			r[i] = h;
			h = 0;
			g++;
		}
	}
	
	long long cnt, ans = 0;
	for(int i = 0; i < n; i++)
	{
		if(l[i] + r[i] > 1)
		{
			cnt = (long long) l[i] * r[i] + max(0, l[i] - 1) + max(0, r[i] - 1);
			ans += cnt;
		}
	}
	
	cout << ans << endl;
	return 0;
}
