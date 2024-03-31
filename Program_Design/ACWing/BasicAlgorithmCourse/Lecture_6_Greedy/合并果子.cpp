#include<iostream>
#include<queue>

using namespace std;

int main()
{
	int n;
	priority_queue<int, vector<int>, greater<int>> q;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		q.push(x);
	}
	int res = 0;
	while(q.size() > 1)
	{
		int a = q.top(); q.pop();
		int b = q.top(); q.pop();
		res += a + b;
		q.push(a + b);
	}
	cout << res;
	return 0;
}
