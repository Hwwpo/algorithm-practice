#include<bits/stdc++.h>

using namespace std;

const int N = 100010;

int n;
int h[N];

int main()
{
	scanf("%d", &n);
	for(int i = 1; i <= n; i++) scanf("%d", &h[i]);
	
	int l = 0, r = 1e5;
	
	auto check = [&] (int mid) -> bool
	{
		for(int i = 1; i <= n; i++)
		{
			mid = mid * 2 - h[i];
			if(mid > 1e5) return true;
			if(mid < 0) return false;
		}
		return true;
	};
	while(l < r)
	{
		int mid = l + r >> 1;
		if(check(mid))r = mid;
		else l = mid + 1;
	}
	
	cout << l << endl;
	return 0;
}
