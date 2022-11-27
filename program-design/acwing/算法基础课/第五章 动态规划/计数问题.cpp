#include<cstring>
#include<iostream>
#include<algorithm>

using namespace std;

int a, b;

int get(vector<int> num, int l, int r)
{
	int res = 0;
	for(int i = l; i >= r; i--)
	{
		res += 10 * res + num[i];
	}
	return res;
}

int power10(int n)
{
	int res = 1;
	while(n--)
	{
		res *= 10;
	}
	return res;
}

int count(int n, int x)
{
    if(!n) return 0;
    
	int res = 0;
	
	vector<int> num;
	while(n)
	{
		num.push_back(n % 10);
		n /= 10;
	}
	
	n = num.size();
	
	for(int i = n - 1 - !x; i >= 0; i--)
	{
		if(i < n - 1)
		{
			res += get(num, n - 1, i + 1) * power10(i);
			if(!x) res -= power10(i);
		}
		
		if(num[i] == x) res += get(num, i - 1, 0) + 1;
		else if(num[i] > x) res += power10(i);
	}
	
	return res;
}

int main()
{
	while(cin >> a >> b, a||b)
	{
	    if(a > b) swap(a, b);
		for(int i = 0; i < 10; i++)
		{
			cout << count(b, i) - count(a - 1, i) << ' ';
		}
		cout << endl;
	}
	return 0;
}
