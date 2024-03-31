// 假定有一个无限长的数轴，数轴上每个坐标上的数都是 0。
//
// 现在，我们首先进行 n 次操作，每次操作将某一位置 x 上的数加 c。
//
// 接下来，进行 m 次询问，每个询问包含两个整数 l 和 r，你需要求出在区间 [l,r] 之间的所有数的和。

#include<bits/stdc++.h>

using namespace std;

typedef pair<int, int> PII;
const int N = 3e5 + 10;

int n, m;
int a[N], s[N];

vector<int> alls;
vector<PII> add, query;

int find(int x)
{
	int l = 0, r = alls.size() - 1;
	
	while (l < r) {
		int mid = l + r >> 1;
		if(alls[mid] >= x) r = mid;
		else
			l = mid + 1;}
	
	return r + 1;
}

int main()
{
	cin >> n >> m;
	
	while (n--) {
		int x, c;
		cin >> x >> c;
		add.push_back({x, c});
		alls.push_back(x);
	}
	while (m--) {
		int l, r;
		cin >> l >> r;
		query.push_back({l, r});
		alls.push_back(l);
		alls.push_back(r);
	}
	
	sort(alls.begin(), alls.end());
	alls.erase(unique(alls.begin(), alls.end()), alls.end());
	
	for(auto item : add)
	{
		int x = find(item.first);
		a[x] += item.second;
	}
	
	for(int i = 1; i <= alls.size(); i++) s[i] = s[i - 1] + a[i];
	
	for(auto item:query)
	{
		int l = find(item.first);
		int r = find(item.second);
		
		cout << s[r] - s[l - 1] << endl;
	}
	return 0;
}