#include<iostream>

using namespace std;

int main()
{
	double s = 0;
	double n = 0;
	while(s <= 12)
	{
		n++;
		s += 1/n;
	}
	cout << n;
	return 0;
}
