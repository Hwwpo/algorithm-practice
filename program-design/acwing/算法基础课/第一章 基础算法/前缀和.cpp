#include<iostream>

using namespace std;

const int N = 100010;

int n, m;
int S[N], a[N];
int main()
{
	scanf("%d%d", &n, &m);

	for(int i = 1; i <= n; i++) scanf("%d", &a[i]);

	for(int i = 1; i <= n; i++) S[i] = S[i - 1] + a[i];

	while(m--)
	{
		int l, r;
		scanf("%d%d", &l, &r);
		printf("%d\n", S[r] - S[l - 1]);
	}
	return 0;
}
