#include<iostream>

using namespace std;

int n;
char ch;

int main()
{
	cin >> n >> ch;
	int res = 0;
	if(ch == 'y') res += 5;
	n -= 1000;
	res += 8;
	while(n > 0)
	{
		res += 4;
		n -= 500;
	}
	cout << res;
	return 0;
}
