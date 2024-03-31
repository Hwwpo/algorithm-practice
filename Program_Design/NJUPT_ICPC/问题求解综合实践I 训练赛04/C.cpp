#include<iostream>

using namespace std;

int m, k;

int main()
{
	cin >> m >> k;
	if(m % 19 == 0)
	{
		int cnt = 0;
		while(m)
		{
			if(m % 10 == 3) cnt++;
			m /= 10;
		}
		
		if(cnt == k) puts("YES");
		else puts("NO");
	}
	else
	{
		puts("NO");
	}
	return 0;
}
