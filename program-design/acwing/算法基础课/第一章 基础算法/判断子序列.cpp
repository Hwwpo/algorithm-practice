#include <iostream>

using namespace std;

const int N = 1e5 + 10;

int n, m;
int a[N], b[N];

int main()
{
	cin >> n >> m;
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < m; i++) cin >> b[i];
	
	for(int i = 0, j = 0; i < m; i++)
	{
		if(b[i] == a[j]) j++;
		if(j == n)
		{
			puts("Yes");
			return 0;
		}
	}
	puts("No");
	return 0;
}