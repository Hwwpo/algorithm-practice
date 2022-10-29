#include<iostream>

using namespace std;

const int N = 1e6 + 10;

int l[N], r[N], e[N], idx;

void init()
{
	r[0] = 1;
	l[1] = 0;
	idx = 2;
}

void add_to_head(int x)
{
	e[idx] = x;
	r[idx] = r[0];
	l[idx] = 0;
	l[r[0]] = idx;
	r[0] = idx++;
}

void add_to_tial(int x)
{
	e[idx] = x;
	l[idx] = l[1];
	r[idx] = 1;
	r[l[1]] = idx;
	l[1] = idx++;
}

void remove(int k)
{
	r[l[k]] = r[k];
	l[r[k]] = l[k];
}

void add_to_right(int k, int x)
{
	e[idx] = x;
	r[idx] = r[k];
	l[idx] = k;
	r[k] = idx;
	l[r[idx]] = idx++;
	
}
int main()
{
	int m;
	cin >> m;
	init();
	while(m--)
	{
		int k, x;
		string str;
		cin >> str;
		if(str == "L")
		{
			cin >> x;
			add_to_right(0, x);
		}
		if(str == "R")
		{
			cin >> x;
			add_to_right(l[1], x);
		}
		if(str == "D")
		{
			cin >> k;
			remove(k + 1);
		}
		if(str == "IL")
		{
			cin >> k >> x;
			add_to_right(l[k+1], x);
		}
		if(str == "IR")
		{
			cin >> k >> x;
			add_to_right(k+1, x);
		}
	}
	for(int i = r[0]; i != 1; i = r[i]) cout << e[i] <<' ';
	return 0;
}
