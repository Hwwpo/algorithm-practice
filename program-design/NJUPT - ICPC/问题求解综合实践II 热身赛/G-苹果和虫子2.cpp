#include<iostream>
#include<math.h>
using namespace std;

int n, x, y;
int main()
{
	cin >> n >> x >> y;
	double eat = ceil(y * 1.0 / x);
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
