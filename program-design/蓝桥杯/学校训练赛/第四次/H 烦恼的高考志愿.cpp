#include<bits/stdc++.h>

using namespace std;

int n, m;
int sch[100010];



int main()
{
	cin >> m >> n;
	for(int i = 0; i < m; i++) scanf("%d", &sch[i]);
	sort(sch, sch + m);
	long long sum = 0;
	for(int i = 0; i < n; i++){
		int stu = 0;
		scanf("%d", &stu);
		int l = 0, r = m - 1;
		while(l < r)
		{
			int mid = l + r >> 1;
			if(sch[mid] >= stu) r = mid;
			else l = mid + 1;
		}
		if(l > 0)
		{
			sum += min(abs(stu - sch[l]), abs(stu - sch[l - 1]));
		}
		else sum += abs(stu - sch[l]);
	}
	cout << sum;
	return 0;
}
