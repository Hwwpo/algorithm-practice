#include<iostream>
#include<algorithm>
#include<cstring>
#include<utility>

using namespace std;

const int N = 5;

char f[N][N], backup[N][N];
pair<int, int> ways[N * N], ways_ans[N * N];

void turn(int x, int y)
{
	for(int i = 0; i < 4; i++)
		f[i][y] ^= 6;
	for(int j = 0; j < 4; j++)
		f[x][j] ^= 6;
	
	f[x][y] ^= 6;
}
int main()
{
	for(int i = 0; i < 4; i++) cin >> f[i];
	
	int res = 100;
	for(int op = 0; op < 1 << 16; op++)
	{
		memcpy(backup, f, sizeof f);
		int step = 0;
		for(int i = 0; i < 16; i++)
			if(op >> i & 1)
			{
				ways[step] = {i / 4, i % 4};
				step ++;
				turn(i / 4, i % 4);
			}
		bool success = true;
		
		for(int i = 0; i < 4; i++)
			for(int j = 0; j < 4; j++)
				if(f[i][j] == '+') success = false;
		
		if(success)
		{
			if(step < res)
			{
				res = step;
				memcpy(ways_ans, ways, sizeof ways);
			}
		}
		memcpy(f, backup, sizeof f);
	}
	cout << res << endl;
	for(int i = 0; i < res; i++)
	{
		cout << ways_ans[i].first + 1 << ' ' << ways_ans[i].second + 1 << endl;
	}
	return 0;
}
