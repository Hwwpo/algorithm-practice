#include<bits/stdc++.h>

using namespace std;

const int N = 10010;
int n;
int a[N];

int main()
{
	cin >> n;
	for(int i = 0; i < n; i++) cin >> a[i];
	int res = 0;
	for(int l = 0; l < n; l++)
	{
		int Min = 0x3f3f3f3f;
		int Max = -1;
		for(int r= l; r < n; r++)
			{
				Min = min(a[r], Min);
				Max = max(a[r], Max);
				if(Max - Min == r - l) res++; 
			}
	}
	
	cout << res;
	return 0;
}
