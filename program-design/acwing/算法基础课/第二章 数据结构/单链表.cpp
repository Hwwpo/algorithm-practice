#include<iostream>

using namespace std;

const int N = 1e6 + 10;

int m, k, x;
int head, e[N], ne[N], idx;

void Init()
{
	head = -1;
	idx = 0;
}

void add_to_head(int x)
{
	e[idx] = x;
	ne[idx] = head;
	head = idx++;
}

void insert(int k, int x)
{
	e[idx] = x;
	ne[idx] = ne[k];
	ne[k] = idx++;
}

void remove(int k)
{
	ne[k] = ne[ne[k]];
}

int main()
{
	cin >> m;
	Init();
	while(m--)
	{
		char ch;
		cin >> ch;
		if(ch == 'H')
		{
			cin >> x;
			add_to_head(x); 
		}
		if(ch == 'D')
		{
			cin >> k;
			if(!k) head = ne[head];
			else remove(k - 1);
		}
		if(ch == 'I')
		{
			cin >> k >> x;
			insert(k - 1, x);
		}
	}
	for(int i = head; i != -1; i = ne[i]) cout << e[i] << ' ';
	return 0;
 } 
