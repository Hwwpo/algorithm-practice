#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

const int N = 100010;

int n;
int a[N];

int main()
{
	scanf("%d", &n);
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	
	long long res = 0;
	
	sort(a, a + n);
	
	for(int i = 0; i < n; i++)
	{
		res += abs(a[i] - a[n / 2]);
	}
	
	printf("%lld", res);
	return 0;
}
