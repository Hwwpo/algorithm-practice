#include<iostream>
#include<stack>
#include<string.h>

using namespace std;

const int N = 510;

int main()
{
	char s[N];
	gets(s);
	stack<char> st;
	for(int i = 0; i < strlen(s); i++)
	{
		if(s[i] == ' ')
		{
			while(st.size())
			{
				cout << st.top();
				st.pop();
			}
			cout << s[i];
		}
		else
		{
			st.push(s[i]);
		}
	}
	while(st.size())
	{
		cout << st.top();
		st.pop();
	}
	return 0;
}
