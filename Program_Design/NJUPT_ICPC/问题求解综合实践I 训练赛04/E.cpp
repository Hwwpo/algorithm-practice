#include<iostream>

using namespace std;

const int N = 110;

int n;


int main()
{
	cin >> n;
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		sum += x;
	}
	printf("%.2lf", 1.0 * sum / n);
	return 0;
}
