#include<bits/stdc++.h>

using namespace std;

int n;
int h[310];

bool cmp(int a, int b){
	return a > b;
}

int main()
{
	cin >> n;
	for(int i = 1; i <= n; i ++) cin >> h[i];
	
	sort(h + 1, h + n + 1, cmp);
	long long sum = 0;
	sum += h[1] * h[1];
	
	for(int i = 1; i < n / 2 + 1; i++)
	{
		sum += (h[i] - h[n - i + 1]) * (h[i] - h[n - i + 1]);
		sum += (h[i + 1] - h[n - i + 1]) * (h[i + 1] - h[n - i + 1]);
	}
	cout << sum;
	return 0;
}
