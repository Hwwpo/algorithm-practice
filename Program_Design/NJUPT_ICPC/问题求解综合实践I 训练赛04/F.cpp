#include<iostream>
#include<string>
using namespace std;

int main()
{
	string a;
	getline(cin, a);
	for(int i = 0; i < a.size(); i++)
	{
		char t = a[i];
		if(t >= 'A' && t <= 'Z')
		{
			if(t == 'Z') a[i] = 'A';
			else a[i] = a[i] + 1;
		}
		else if(t >= 'a' && t <= 'z')
		{
			if(t == 'z') a[i] = 'a';
			else a[i] = a[i] + 1;
		}
	}
	cout << a;
	return 0;
}
