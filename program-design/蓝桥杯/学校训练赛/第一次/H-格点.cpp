#include<iostream>
using namespace std;

int main()
{
	int x = 1;
	int y = 1;
	int count = 0;
	for(int x = 1; x <= 2021; x++)
	{
		for(int y = 1; y <= 2021; y++)
		{
			if(x*y <= 2021) count ++;
		}
	 } 
	cout << count;
}
