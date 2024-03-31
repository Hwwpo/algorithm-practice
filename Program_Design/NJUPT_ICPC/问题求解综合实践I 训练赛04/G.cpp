#include<iostream>
#include<algorithm>

using namespace std;

int n, k;

struct people{
	string name;
	int time;
	
	bool operator < (const people W)const
	{
		return time < W.time;
	}
}peoples[100];

int main()
{
	cin >> n >> k;
	for(int i = 0; i < n; i++)
	{
		string a;
		int b;
		cin >> a >> b;
		peoples[i] = {a, b};
	}
	sort(peoples, peoples + n);
	
	cout << peoples[k - 1].name;
	return 0;
}
