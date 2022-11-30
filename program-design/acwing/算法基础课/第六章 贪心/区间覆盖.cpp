#include<iostream>
#include<algorithm>

using namespace std;

const int N = 100010;

int n;
struct Range{
	int l, r;
	
	bool operator < (const Range &W) const
	{
		return l < W.l;
	}
}ranges[N];

int main()
{
	int st, ed;
	scanf("%d%d", &st, &ed);
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		int l, r;
		scanf("%d%d", &l, &r);
		ranges[i] = {l, r};
	}
	
	sort(ranges, ranges + n);
	int res = 0, flag = false;
	
	for(int i = 0; i < n; i++)
	{
		int j = i, r = -2e9;
		
		while(j < n && ranges[j].l <= st)
		{
			r = max(r, ranges[j].r);
			j++;
		}
		
		if(r < st)
		{
			res = -1;
			break;
		}
		
		
		
		res ++;
		
		if(r >= ed) 
		{
		    flag = true;
		    break;
		}

        st = r;
        
		i = j - 1;
	}
	if(!flag) res = -1;
	printf("%d", res);
	return 0;
}
