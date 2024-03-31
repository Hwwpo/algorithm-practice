#include<iostream>
#include<algorithm>

typedef long long LL;
using namespace std;

const int N = 100010;

int n;
int c[N];

int main()
{
	cin >> n;
	
	for(int i = 0; i < n; i++) cin >> c[i];
	
	sort(c, c + n);
	
	LL res = 0, ans;

	for(int i = 0; i < n; i++)
	{
		LL t = (long long) c[i] * (n - i);
		if(t > res)
		{
			res = t, ans = c[i];
		}
	}
	
	cout << res << ' ' << ans;
	return 0;
}
