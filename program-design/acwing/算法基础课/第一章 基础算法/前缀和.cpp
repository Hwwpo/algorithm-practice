#include<iostream>

using namespace std;

const int N = 1e6 + 10;

int n, m;
int A[N], B[N];

int main()
{
	scanf("%d%d", &n, &m);
	for(int i = 1; i <= n; i++)
	{
		scanf("%d", &A[i]);
	}
	for(int i = 1; i <= n; i++)
	{
		B[i] = B[i - 1] + A[i];
	}
	while(m--)
	{
		int l, r;
		cin >> l >> r;
		printf("%d\n", B[r] - B[l - 1]);
	}
	return 0;
}
