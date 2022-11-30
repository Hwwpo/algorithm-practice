#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

const int N = 100010;

int n;
struct range{
	int l, r;
	
	bool operator < (const range W) const
	{
		return r < W.r;
	}
}ranges[N];

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
		if(ed < ranges[i].l)
		{
			res++;
			ed = ranges[i].r;
		}
	}
	
	cout << res << endl;
	return 0;
}
