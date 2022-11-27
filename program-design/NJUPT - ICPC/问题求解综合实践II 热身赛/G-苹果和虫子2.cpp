#include<iostream>

using namespace std;

int n, x, y;
int main()
{
	cin >> n >> x >> y;
	int eat = (y - 1) / x + 1;
	if(n - eat > 0)
	{
		cout << n - eat;
	}
	else
	{
		cout << '0';
	}
	return 0;
	
}
