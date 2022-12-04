#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

const int N = 6;

char f[N][N], backup[N][N];
int dx[5] = {1, 0, -1, 0, 0}, dy[5] = {0, 1, 0, -1, 0};

void turn(int x, int y)
{
	for(int i = 0; i < 5; i++)
	{
		int a = x + dx[i], b = y + dy[i];
		if(a < 0 || a >= 5 || b < 0 || b >= 5)
			f[a][b] ^= 1;
	}
}


int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		for(int i = 0; i < 5; i++) cin >> f[i];
		
		int res = 10;
		for(int op = 0; op < 32; op++)
		{
			memcpy(backup, f, sizeof f);
			int step = 0;
			for(int i = 0; i < 5; i++)
			{
				if(op >> i & 1)
				{
					step++;
					turn(0, i);
				}
			}
			
			for(int i = 0; i < 4; i++)
			{
				for(int j = 0; j < 5; j++)
				{
					if(f[i][j] == '0')
					{
						step++;
						turn(i + 1, j);
					}
				}
			}
			
			bool dark = false;
			for(int i = 0; i < 5; i++)
				if(f[4][i] == '0') dark = true;
			
			if(!dark) res = min(res, step);
			memcpy(f, backup, sizeof f);
		}
		
		if(res > 6) res = -1;
		
		cout << res <<endl;
	}
	return 0;
}
