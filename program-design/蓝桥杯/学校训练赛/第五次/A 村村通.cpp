#include<bits/stdc++.h>

using namespace std;

int p[10000];
int n, m=0;

int find(int x)
{
	if(p[x] != x) p[x] = find(p[x]);
	return p[x];
}

int main()
{
	cin >> n >> m;
	while(n)
	{
		set<int> s;
		for(int i = 1; i <= n; i++) p[i] = i;
		for(int i = 0; i < m; i++)
		{
			int a, b;
			cin >> a >> b;
			p[find(a)] = find(b);
		}
		for(int i = 1; i <= n; i++){
			s.insert(find(i));
		}
		cout << s.size() - 1<< endl;
		cin >> n;
		if(n == 0) break;
		cin >> m;
	}
	return 0;
}
