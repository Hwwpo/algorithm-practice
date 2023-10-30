#include <iostream>

using namespace std;

const int N = 1e5 + 10;

int m, tt;
int stk[N];

void push(int x)
{
	stk[++tt] = x;
}

void pop()
{
	tt--;
}

bool empty()
{
	return tt > 0;
}

int query()
{
	return stk[tt];
}
int main()
{
	cin >> m;
	while (m--) {
		string op;
		cin >> op;
		if (op == "push")
		{
			int x;
			cin >> x;
			push(x);
		}
		else if (op == "pop")
		{
			pop();
		}
		else if (op == "empty")
		{
			auto answer = empty() ? "NO": "YES";
			cout << answer << endl;
		}
		else
		{
			cout << query() << endl;
		}
	}
	return 0;
}