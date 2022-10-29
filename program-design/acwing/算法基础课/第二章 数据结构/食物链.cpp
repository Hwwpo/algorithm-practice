#include<iostream>

using namespace std;

const int N = 50010;

int n, m;
int p[N], d[N];

int find(int x)
{
	if(p[x] != x)
	{
		d[x] += d[p[x]];
		p[x] = find(p[x]);
	}
	return p[x];
}


int main()
{
	scanf("%d%d", &n, &m);
	for(int i = 1; i <= n; i++) p[i] = i;
	int res = 0;
	while(m--)
	{
		int flag, x, y;
		scanf("%d%d%d", &flag, &x, &y);
		if((x > n) || (y > n))
		{
			res++;
			continue;
		}
		if(flag == 1)
		{
			int px = find(x), py = find(y);
			if(px == py && (d[x] - d[y]) % 3) res ++;
			else
			{
				p[px] = py;
				d[px] = d[y] - d[x];
			}
		}
		else
		{
			int px = find(x), py = find(y);
			if(px == py && (d[x] - 1 - d[y]) % 3) res++;
			else
			{
				p[px] = p[y];
				d[px] = d[y] - d[x] + 1;
			}
		}
	}
	printf("%d", res);
	return 0;
}
