#include<iostream>

using namespace std;

const int N = 1e6 + 10;

int q[N], hh, tt;
void init()
{
	hh = 0;
	tt = -1;
}
void pop()
{
	hh++;
}

void push(int x)
{
	q[++tt] = x;
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
	init();
	int m;
	cin >> m;
	while(m--)
	{
		string op;
		cin >> op;
		if(op == "push")
		{
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
			if(empty) puts("NO");
			else puts("YES");
		}
		else
		{
			cout << query() << endl;
		}
	}
	return 0;
}
