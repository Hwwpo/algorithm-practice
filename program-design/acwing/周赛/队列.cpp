#include<iostream>

using namespace std;

int n;
int loc[26];

int main()
{
	cin >> n;
	for(int i = 0; i < 28; i++)
	{
		loc[i] = 5 * 1 << i;
	}
	int i = 0;
	int len;
	while(n > 0)
	{
		len = n;
		n -= loc[i];
		i++;
	}
	i--;
	if(len <= 1 << i) puts("a");
	else if(len <= 2 * (1 << i)) puts("b");
	else if(len <= 3 * (1 << i)) puts("c");
	else if(len <= 4 * (1 << i)) puts("d");
	else if(len <= 5 * (1 << i)) puts("e");
	return 0;
}
