#include<iostream>

using namespace std;

int n;

int main()
{
	cin >> n;
	if(n % 4 == 0)
	{
		if(n % 100 == 0)
		{
			if(n % 400 == 0)
			{
				puts("Y");
			}
			else
			{
				puts("N");
			}
		}
		else
		{
			puts("Y");
		}
	}
	else
	{
		puts("N");
	}
	return 0;
}
