#include<bits/stdc++.h>

using namespace std;

typedef pair<float, int> PII;

vector<PII> a;
int n, m;
// 排序算法 
bool cmp(PII &a, PII &b){
	return a.second / a.first > b.second / b.first;
}
void GreedyKnapsack(float *x)
{
	float u = m;					// 将背包剩余载重量u 初始化为m
	int i = 0;
	for(i = 0; i < n; i++) x[i] = 0;//对解向量x 初始化
	for(i = 0; i < n; i++)			//按最优量度标准选择解分量xi
	{
		if(a[i].first > u) break;	//若当前物品i 已无法全部装下，则跳出
		x[i] = 1.0;					//否则，整个装入当前物品i
		u = u - a[i].first;			//同时背包剩余载重减w[i]
	}
	if(i < n) x[i] = u / a[i].first;//背包剩余空间只够放下当前物品i 的x[i]部分
}

int main()
{
	cout << "请输入物品的种类数：";
	cin >> n;
	cout << "请输入背包的载重：";
	cin >> m;
	for(int i = 0; i < n; i++)
	{
		float w;
		int p;
		cout << "请输入第 " << i + 1 <<" 种物品的重量和价值：";
		cin >> w >> p;
		a.push_back(make_pair(w, p));
	}
	sort(a.begin(), a.end(), cmp); // w[i]按p[i]/w[i]的非增次序排序
	for(int i = 0; i < n; i++)
	{
		cout << a[i].first << '-' << a[i].second << endl;
	}
	float x[10];
	GreedyKnapsack(x);
	cout << "得到的x数组为："; 
	for(int i = 0; i < n; i++ )
		cout << x[i] << ' ';
	cout << endl;
	float sum = 0;
	for(int i = 0; i < n; i++ ){
		sum += x[i] * a[i].second;
	}
	cout << "总收益为：" << sum; 
	return 0;
}
