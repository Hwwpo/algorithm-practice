#include<bits/stdc++.h>

using namespace std;

int main()
{
	stack<int> s;
	string a;
	cin >> a;
	int num = 0;
	char c;
	for(int i = 0; i < a.length(); i++)
	{
		c = a[i];
		if(c == '.')
		{
			s.push(num);
			num = 0;
		}
		else if(c >= '0' && c <= '9')
		{
			num = num * 10 + (c - '0');
		}
		else if(c == '+')
		{
			int ed = s.top();
			s.pop();
			int st = s.top();
			s.pop();
			s.push(ed + st);
		}
		else if(c == '-')
		{
			int ed = s.top();
			s.pop();
			int st = s.top();
			s.pop();
			s.push(st - ed);
		}
		else if(c == '*')
		{
			int ed = s.top();
			s.pop();
			int st = s.top();
			s.pop();
			s.push(ed * st);
		}
		else if(c == '/')
		{
			int ed = s.top();
			s.pop();
			int st = s.top();
			s.pop();
			s.push(st / ed);
		}
	}
	cout << s.top() << endl;
}
