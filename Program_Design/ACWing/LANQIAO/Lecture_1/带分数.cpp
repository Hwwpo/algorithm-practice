#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

const int N = 10;

int n;
int st[N];
bool used[N];
int res;

int sp(int l, int r)
{
	int a = 0;
	for(int i = l; i <= r; i++)
	{
		a = a * 10 + st[i];
	}
	return a;
}

bool check(int a, int b, int c)
{
	return a * c + b - n * c == 0;
}

void dfs(int u)
{
	if(u > 9)
	{
		for(int i = 1; i <= 9; i++)
		{
			for(int j = i + 1; j <= 9; j++)
				{
					int a = sp(1, i);
					int b = sp(i + 1, j);
					int c = sp(j + 1, 9);
					if(check(a, b, c)) res++;
				}
		}
		return;
	}
	
	for(int i = 1; i <= 9; i++)
	{
		if(!used[i])
		{
			st[u] = i;
			used[i] = true;
			
			dfs(u + 1);
			
			st[u] = 0;
			used[i] = false;
		}
	}
}

int main()
{
	cin >> n;
	
	dfs(1);
	
	cout << res <<endl;
	return 0;
}
