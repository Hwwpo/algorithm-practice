#include<bits/stdc++.h>

using namespace std;

int main()
{
	int cnt = 0;
	long long a = 2021041820210418;
	vector<long long> res;
	for(long long i = 1; i <= a / i; i++)
	{
		if(a % i == 0)
		{
			res.push_back(i);
			if(i != a / i) res.push_back(a / i);
		}
	}
	for(int i = 0; i < res.size(); i++)
	{
		for(int j = 0; j < res.size(); j++)
		{
			for(int k = 0; k < res.size(); k++)
			{
				if(res[i] * res[j] * res[k] == a) cnt++;
			}
		}
	}
	cout << cnt;
 } 
