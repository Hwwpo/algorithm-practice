#include<cstring>
#include<iostream>

using namespace std;

const int N = 100003;

int n;
int h[N], e[N], ne[N], idx = 0;

void insert(int x)
{
	int k = (x % N + N) % N;
	
	e[idx] = x;
	ne[idx] = h[k];
	h[k] = idx++;
}

bool query(int x)
{
	int k = (x % N + N) % N;
	
	for(int i = h[k]; i != -1; i = ne[i])
	{
		if(e[i] == x) return true;
	}
	return false;
}



int main()
{
	scanf("%d", &n);
	memset(h, -1, sizeof h);
	while(n--)
	{
		char op[2];
		scanf("%s", &op);
		if(op[0] == 'I')
		{
			int x;
			scanf("%d", &x);
			insert(x);
		}
		else
		{
			int x;
			scanf("%d", &x);
			if(query(x)) puts("Yes");
			else puts("No");
		}
	}
	return 0;
 } 
