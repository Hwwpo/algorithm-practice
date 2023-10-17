#include<bits/stdc++.h>

using namespace std;

int N;
int num[60];
int L, R;

int main()
{
	int sum = 0;
	int less = 0, more = 0;
	cin >> N;
	for(int i = 0; i < N; i++)
	{
		cin >> num[i];
		sum += num[i];
	}
	cin >> L >> R;
	if(sum < L * N || sum > R * N)
	{
		cout << "-1";
		return 0;
	}
	for(int i = 0; i < N; i++)
	{
		if(num[i] < L) less += L - num[i];
		else if(num[i] > R) more += num[i] - R;
	}
	cout << max(less, more);
	return 0;
	
}
