#include<iostream>

using namespace std;

int s[100];
int main()
{
	for(int i = 1; i < 100; i++)
	{
		s[i] +=  i + s[i - 1]; 
	}
	int n;
	cin >> n;
	for(int i = 0; i < 100; i++)
	{
		if(s[i] == n)
		{
			puts("YES");
			return 0;
		}
	}
	puts("NO");
	return 0;
}
