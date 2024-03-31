#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<utility>
using namespace std;

const int N = 25;

int n, m;
char g[N][N];
int d[N][N];
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
int bfs()
{
	int o, u;
	memset(d, -1, sizeof d);
	queue< pair<int, int> > p;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
		{
			if(g[i][j] == '@')
			{
				p.push({i, j});
				d[i][j] = 0;
			}
			if(g[i][j] == '*')
			{
				o = i;
				u = j;
			}
		}
	
	while(p.size())
	{
		pair<int, int> t = p.front();
		p.pop();
		
		for(int i = 0; i < 4; i++)
		{
			int x = t.first + dx[i], y = t.second + dy[i];
			if(x >= 0 && x < n && y >= 0 && y < m && (g[x][y] == '.' || g[x][y] == '*') && d[x][y] == -1)
			{
				d[x][y] = d[t.first][t.second] + 1;
				p.push({x, y});
			}
		}
	}
	return d[o][u];
}

int main()
{
	cin >> n >> m;
	for(int i = 0; i < n; i ++) cin >> g[i];
	
	int res = bfs();
	
	cout << res << endl;
	return 0;
}
