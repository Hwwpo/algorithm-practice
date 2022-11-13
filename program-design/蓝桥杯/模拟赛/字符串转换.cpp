#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	string a;
	cin >> a;
	for(int i = 0; i < a.size(); i++)
	{
		if(a[i] == 'a')
		{
			a[i] = 'A';
		}
		else if(a[i] == 'e')
		{
			a[i] = 'E';
		}
		else if(a[i] == 'i')
		{
			a[i] = 'I';
		}
		else if(a[i] == 'o')
		{
			a[i] = 'O';
		}
		else if(a[i] == 'u')
		{
			a[i] = 'U';
		}
	}
	cout << a << endl;
	return 0;
 } 
