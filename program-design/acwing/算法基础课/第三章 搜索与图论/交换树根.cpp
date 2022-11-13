#include<iostream>
using namespace std;

const int N = 50000;

int n, r1, r2;
int p[N];

void change(int u)
{
	int j = p[u];
	
	if(p[j] == r1)
	{
		p[j] = r2;
		p[r1] = r2;
		return;
	}
	change(j);
	p[j] = r2;
}

int main()
{
	cin >> n >> r1 >> r2;
	for(int i = 1; i <= n; i++)
	{
		if(i == r1) continue;
		cin >> p[i];
	}
	change(r2);
	for(int i = 1; i <= n; i++)
	{
		if(i == r2) continue;
		cout << p[i];
	}
	return 0;
}
