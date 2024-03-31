#include<bits/stdc++.h>

using namespace std;

int n, m;
int s[32][32];


int main()
{
	cin >> n >> m;
	for(int i = 1; i <= max(n, m); i++)
	{
		s[i][1] = 1;
		s[1][i] = 1;
	}
	
	for(int i = 2; i <= n; i++){
		for(int j = 2; j <= m; j++){
			if(i % 2 == 0 && j % 2 == 0) continue;
			s[i][j] = s[i - 1][j] + s[i][j - 1];
		}
	}
	cout << s[n][m];
	return 0;
}
