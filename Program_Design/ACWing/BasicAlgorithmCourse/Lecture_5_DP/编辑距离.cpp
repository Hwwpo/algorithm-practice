#include<iostream>
#include<algorithm>
#include<string.h>

using namespace std;

const int N = 14, M = 1010;

int n, m;
char str[M][N];
int f[M][M];

bool edit_dist(char a[], char b[], int limit)
{
	int la = strlen(a + 1), lb = strlen(b + 1);
	
	for(int i = 0; i <= lb; i++) f[0][i] = i;
	for(int i = 0; i <= la; i++) f[i][0] = i;
	
	for(int i = 1; i <= la; i++)
	{
		for(int j = 1; j <= lb; j++)
		{
			f[i][j] = min(f[i - 1][j] + 1, f[i][j - 1] + 1);
			f[i][j] = min(f[i][j], f[i - 1][j - 1] + (a[i] != b[j]));
		}
	}
	return f[la][lb] <= limit;
}

int main()
{
	cin >> n >> m;
	for(int i = 0; i < n; i++) scanf("%s", str[i] + 1);
	
	while(m--)
	{
		char x[N];
		int limit;
		scanf("%s %d", x + 1, &limit);
		int res = 0;
		for(int i = 0; i < n; i++)
		{
			if(edit_dist(str[i], x, limit))
				res++;
		}
		cout << res << endl;
	}
	return 0;
}

