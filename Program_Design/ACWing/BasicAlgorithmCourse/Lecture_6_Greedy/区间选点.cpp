#include<iostream>
#include<algorithm>

using namespace std;

const int N = 100010;

struct range{
	int l, r;
	bool operator < (const range &w) const
	{
		return r < w.r;
	}
}ranges[N];

int n;

int main()
{
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		int l, r;
		scanf("%d%d", &l, &r);
		ranges[i] = {l, r};
	}
	
	sort(ranges, ranges + n);
	
	int res = 0, ed = -2e9;
	
	for(int i = 0; i < n; i++)
	{
		if(ranges[i].l > ed)
		{
			res++;
			ed = ranges[i].r;
		}
	}
	
	cout << res << endl;
	return 0;
}
