#include<iostream>

using namespace std;

bool judge(int y)
{
	if(y % 4 == 0)
	{
		if(y % 100  == 0)
		{
			if(y % 400 == 0) return true;
			else return false;
		}
		else
		{
			return true;
		}
	}
	else return false;
}

int main()
{
	int y, m, d;
	cin >> y >> m >> d;
	int months_p[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int months_r[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int sum = d;
	if(judge(y))
	{
		for(int i = 0; i < m - 1; i++)
		{
			sum += months_r[i];
		}
	}
	else
	{
		for(int i = 0; i < m - 1; i++)
		{
			sum += months_p[i];
		}
	}
	cout << sum;
	return 0;
}
