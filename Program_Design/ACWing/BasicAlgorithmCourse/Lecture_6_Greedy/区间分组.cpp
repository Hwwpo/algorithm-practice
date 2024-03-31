#include<iostream>
#include<algorithm>
#include<priority_queue>
using namespace std;

const int N = 100010;

int n;
struct range{
	int l, r;
	bool operator < (const range &w)const
	{
		return l < w.l;
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
	
	priority_queue<int, vector<int>, greater<int>> q;
	
	for(int i = 0; i < n; i++)
	{
		if(q.empty() || q.top() >= ranges[i].l) q.push(ranges[i].r);
		else
		{
			q.pop();
			q.push(ranges[i].r);
		}
	}
	
	printf("%d", q.size());
	return 0;
}
