#include<iostream>
#include<cstring>
using namespace std;

const int N = 5010;

int n, m;
bool st[N];

int main()
{
	cin >> n >> m;
	bool flag = true;
	int j = 2;
	while(j <= n)
	{
		st[j] = true;
		j += 2;
	}
	for(int i = 3; i <= m; i++)
	{
		int j = i;
		while(j <= n)
		{
			st[j] = !st[j];
			j += i;
		}
	}
	vector<int> num;
	for(int i = 1; i <= n; i++)
	{
		if(!st[i]) num.push_back(i);
	}
	for(int i = 0; i < num.size() - 1; i++)
	{
		cout << num[i] << ',';
	}
	cout << num[num.size() - 1];
	return 0;
}
