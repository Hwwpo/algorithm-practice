#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
const int N = 5010;

int n, r;
int f[N][N];

int main()
{
	int Max = 0;
	cin >> n >> r;
	for(int i = 0; i < n; i++)
	{
		int x, y, w;
		cin >> x >> y >> w;
		Max = max(max(Max, x + 1), y + 1);
		f[x + 1][y + 1] += w;
	}
	
	for(int i = 1; i <= Max; i++){
		for(int j = 1; j <= Max; j++){
			f[i][j] += f[i - 1][j] + f[i][j - 1] - f[i - 1][j - 1];
		}
	}

	int res = 0;
	if(r > Max){
		cout << f[Max][Max];
		return 0;
	}
	for(int i = r; i <= Max; i++){
		for(int j = r; j <= Max; j++){
			res = max(res, f[i][j] - f[i - r][j] - f[i][j - r] + f[i - r][j - r]);
		}
	}
	cout << res;
	return 0;
	
}
