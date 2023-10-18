//给定 n 个区间 [li,ri]，要求合并所有有交集的区间。
//
//注意如果在端点处相交，也算有交集。
//
//输出合并完成后的区间个数。
//
//例如：[1,3] 和 [2,6] 可以合并为一个区间 [1,6]。

#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> PII;

int n;
vector<PII> segs, res;

// 按区间起点排序后，维护的当前区间与下一个区间只有三种关系
// 1. 完全包含关系
// 2. 半包含关系
// 3. 不包含关系
// 前两种情况可以直接将维护终点取最大值，第三种情况代表一个区间已经合并完成，将维护区间变为下一个区间即可
int merge(vector<PII> &segs)
{
	int st = -2e9, ed = -2e9;
	
	for(auto seg:segs)
	{
		if(ed < seg.first)
		{
			if(st != -2e9) res.push_back({st, ed});
			st = seg.first;
			ed = seg.second;
		}
		else ed = max(ed, seg.second);
	}
	if(st != -2e9) res.push_back({st, ed});
	
	return res.size();
}

int main()
{
	cin >> n;
	while (n--) {
		int l, r;
		cin >> l >> r;
		segs.push_back({l, r});
	}
	
	sort(segs.begin(), segs.end());
	
	cout << merge(segs)	<< endl;
	return 0;
}
