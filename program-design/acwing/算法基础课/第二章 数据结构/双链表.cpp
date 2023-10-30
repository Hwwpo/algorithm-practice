#include <iostream>

using namespace std;

const int N = 1e5 + 10;

int m;
int l[N], r[N], e[N];
int idx;

void init()
{
	r[0] = 1;
	l[1] = 0;
	idx = 2;
}

void add_to_right(int k, int x)
{
	e[idx] = x;
	l[idx] = k;
	r[idx] = r[k];
	l[r[k]] = idx;
	r[k] = idx++;
}

void remove(int k)
{
	l[r[k]] = l[k];
	r[l[k]]	= r[k];
}

int main()
{
	scanf("%d", &m);
	init();
	while (m--) {
		string op;
		cin >> op;
		if (op == "L")
		{
			int x;
			scanf("%d", &x);
			add_to_right(0, x);
		}
		else if (op == "R") 
		{
			int x;
			scanf("%d", &x);
			add_to_right(l[1], x);
		}
		else if(op == "D")
		{
			int x;
			scanf("%d", &x);
			remove(x + 1);
		}
		else if(op == "IL")
		{
			int x, k;
			scanf("%d%d", &k, &x);
			add_to_right(l[k + 1], x);
		}
		else
		{
			int x, k;
			scanf("%d%d", &k, &x);
			add_to_right(k + 1, x);
		}
	}
	
	for(int i = r[0]; i != 1; i = r[i])
	{
		printf("%d ", e[i]);
	}
}