#include<iostream>

using namespace std;

const int N = 1e5 + 10;

int n, m;
int h[N], size = 0;

void down(int n)
{
	int t = n;
	if(n * 2 <= size && h[n * 2] < h[n]) t = n * 2;
	if(n * 2 + 1 <= size && h[n * 2 + 1] < h[t]) t = n * 2 + 1;
	if(t != n)
	{
		swap(h[t], h[n]);
		down(t);
	}
}

int main()
{
	scanf("%d%d", &n, &m);
	for(int i = 1; i <= n; i++) scanf("%d", &h[i]);
	size = n;
	for(int i = n / 2; i ; i--) down(i);
	for(int i = 1; i <= m; i++)
	{
		printf("%d ", h[1]);
		h[1] =  h[size];
		size--;
		down(1);
	}
	return 0;
}
