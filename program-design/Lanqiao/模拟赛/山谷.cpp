#include<iostream>

using namespace std;

char c[40][70];

int main()
{
	int n = 30, m = 60;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			cin >> c[i][j];
	
	int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
	
	int count = 0;
	for(int i = 1; i < n - 1; i++)
		for(int j = 1; j < m - 1; j++)
			if(c[i][j] < c[i + dx[0]][j + dy[0]] && c[i][j] < c[i + dx[1]][j + dy[1]] && c[i][j] < c[i + dx[2]][j + dy[2]] && c[i][j] < c[i + dx[3]][j + dy[3]])
			{
				count ++;
			}
	cout << count << endl;
	return 0;
}
