#include <iostream>

using namespace std;

const int N = 1e5 + 10;

int q[N], hh, tt = -1;

void push(int x)
{
	q[++tt] = x;
}

void pop()
{
	hh++;
}

bool empty()
{
	return hh <= tt;
}

int query()
{
	return q[hh];
}
int main()
{
	int m;
	cin >> m;
	while (m--) {
		string op;
		cin >> op;
		if (op == "push") {
			int x;
			cin >> x;
			push(x);
		}
		else if(op == "pop")
		{
			pop();
		}
		else if(op == "empty")
		{
			auto answer = empty()?"NO":"YES";
			cout << answer << endl;
		}
		else
		{
			int answer = query();
			cout << answer << endl;
		}
	}
}