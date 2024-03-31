#include<iostream>
#include<string>

using namespace std;

int main()
{
	string a;
	getline(cin, a);
	
	char ch;
	
	for(int i = 0; i < a.size(); i++)
	{
		char t = a[i];
		if((t >= 'A' && t <= 'Z') || (t >= 'a' && t <= 'z')) ch = t;
	}
	if(ch == 'A' || ch == 'E' || ch == 'I'|| ch == 'O' || ch == 'U' || ch == 'Y') puts("YES");
	else if(ch == 'a' || ch == 'e' || ch == 'i'|| ch == 'o' || ch == 'u' || ch == 'y') puts("YES");
	else puts("NO");
	return 0;
}
