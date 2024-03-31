#include<bits/stdc++.h>

using namespace std;

int flag[30];
int res[30];
int cnt;

void C(int n, int r, int t, int k)
{
	if(r <= 0)
	{
		for(int i = t; i > 0; i--) cout << setw(3)<< res[i]; 
		cout << endl;
		return;
	}
	for(int i = k; i <= n; i++)
	{
		if(!flag[i])
		{
			res[r] = i;
			flag[i] = 1;
			C(n, r - 1, t, i + 1);
			flag[i] = 0; 
		}
	}
}

int main()
{
	int n, r;
	cin >> n >> r;
	C(n, r, r, 1);
	return 0;
}
