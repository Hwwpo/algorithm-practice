#include<bits/stdc++.h>
using namespace std;


int m;
int n;

int s[30010];


int main()
{
	cin >> m;
	while(m--)
	{
		cin >> n;
		int i, flag = 1;
		for(i = 0; i < n; i++) cin >> s[i];
		for(i = 1; i < n - 1; i++)
		{
			if(s[i] > s[i - 1] + s[i + 1]){
				flag = 0;
				break;
			}
		}
		if(flag) puts("YES");
		else puts("NO");
	}
	return 0;
}
