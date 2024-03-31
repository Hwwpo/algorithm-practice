#include<bits/stdc++.h>

using namespace std;

const int N = 3010;

int n;
int arr[N];
int Minus[N];

int main()
{
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if(i > 0)
			Minus[i] = abs(arr[i - 1] - arr[i]);
	}
	
    sort(Minus + 1, Minus + n);
    

	for(int i = 1; i < n - 1; i++)
	{
		if(Minus[i + 1] - Minus[i] == 1)
		{
			continue;
		}
		else
		{
			puts("Not jolly");
			return 0;
		}
	}
	puts("Jolly");
	return 0;
 } 
