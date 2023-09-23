#include<iostream>

using namespace std;

const int N = 100010;

int n;
int a[N];

int main()
{
	scanf("%d", &n);
	for(int i = 1; i <= n; i++) scanf("%d", &a[i]);
	
	int res = 0;
	for(int i = n; i > 1; i--)
	{
		if(a[i] == a[1])
		{
			res++;
			break;
		}
		else
		{
			res++;
		}
	}
	
	cout << res << endl;
	return 0;
}
