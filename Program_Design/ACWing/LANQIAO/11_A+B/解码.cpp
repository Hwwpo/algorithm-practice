#include<bits/stdc++.h>

using namespace std;

int main()
{
	string a;
	cin >> a;
	for(int i = 0; i < a.length(); i++)
	{
		char c = a[i];
		if(a[i + 1] >= '0' && a[i + 1] <= '9')
		{
			while(a[i + 1] > '0')
			{
				cout << c;
				a[i + 1] -= 1;
			}
		}
		else if((c >= 'a' && c <= 'z') || c >= 'A' && c <= 'Z'){
			cout << c;
		}
	}
	return 0;
 } 
