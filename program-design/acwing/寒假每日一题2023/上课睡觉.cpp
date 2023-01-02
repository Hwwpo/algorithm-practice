#include<iostream>

using namespace std;

const int N = 100010;

int n;
int w[N];

bool check(int cnt)
{
	int s = 0;
	for(int i = 0; i < n; i ++)
	{
		s += w[i];
		if(s > cnt) return false;
		if(s == cnt) s = 0;
	}
	return true;
}

int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		cin >> n;
		int sum = 0;
		for(int i = 0; i < n; i ++)
		{
			cin >> w[i];
			sum += w[i];
		}
		for(int i = n; i; i--)
		{
			if(sum % i == 0 && check(sum / i))
			{
				cout << n - i << endl;
				break;
			}
		}
	}
}
