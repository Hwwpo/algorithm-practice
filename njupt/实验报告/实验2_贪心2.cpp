#include<bits/stdc++.h>

using namespace std;

typedef pair<int, int> PII;
typedef pair<int, PII> PIII;

int n;
vector<PIII> a;
int x[100];
int p[100];
bool cmp(PIII a, PIII b){
	return a.second.second > b.second.second;
}

int find(int x)
{
	if(p[x] != x) p[x] = find(p[x]);
	return p[x];
}

int FJS()
{
	int b, k = -1, *f = new int[n + 1];
	for(int i = 0; i <= n + 10; i++){
		f[i] = i;
		p[i] = i;
	}
	for(int i = 0; i < n; i++){
		if(n < a[i].second.first) b = n; else b = a[i].second.first;
		int r = find(b);
		if(f[r]){
			x[++k] = i;
			int t = find(f[r] - 1);
			p[find(r)] = find(t);
			f[r] = f[t]; 
		}
	}
	return k;
}


int main()
{
	cout << "请输入作业的数量:";
	cin >> n;
	for(int i = 0; i < n; i++){
		int d, p;
		cout << "请输入作业 " << i << " 的截止日期以及完成奖励："; 
		cin >> d >> p;
		a.push_back(make_pair( i, make_pair(d, p) ));
	}
	sort(a.begin(), a.end(), cmp);
	int k = FJS();
	int sum = 0;
	cout << "选择的作业编号为：";
	for(int i = 0; i <= k; i++)
	{
		cout << a[x[i]].first << ' ';
		sum += a[x[i]].second.second;
	}
	cout << endl << "最大收益为:" << sum;
	return 0; 
	
}
int JS()
{
	//设p0≥p1 ≥... ≥pn-1
	int k = 0;//(x[0],...,x[k])是当前已入选的作业向量
	x[0] = 0;
	for(int j = 1; j < n; j++){
		int r = k;//变量r 负责从位置k 向前寻找插入位置
		while(r >= 0 && a[x[r]].second.first > a[j].second.first && a[x[r]].second.first > r + 1) r--;
		if((r < 0 || a[x[r]].second.first <= a[j].second.first) && a[j].second.first > r + 1)
		{
			for(int i = k; i >= r + 1; i--) x[i + 1] = x[i];
			x[r + 1]=j;//作业j 插入r+1 位置处
			k++;
		}
	}
	return k;
}



