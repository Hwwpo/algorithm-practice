#include<iostream>

using namespace std;

int main()
{
	string a;
	cin >> a;
	int length = a.size();
	
	if(a[length - 1] == 'r' && a[length - 2] == 'e')
	{
		for(int i = 0; i < length - 2; i++)
		{
			cout << a[i];
		}
	}
	else if(a[length - 1] == 'y' && a[length - 2] == 'l')
	{
		for(int i = 0; i < length - 2; i++)
		{
			cout << a[i];
		}
	}
	else if(a[length - 1] == 'g' && a[length - 2] == 'n' && a[length - 3] == 'i')
	{
		for(int i = 0; i < length - 3; i++)
		{
			cout << a[i];
		}
	}
	return 0;
}
