#include<iostream>
#include<unordered_map>
#include<stack>
#include<string.h>
using namespace std;

unordered_map<char, int> priority{{'+', 1}, {'-', 1}, {'*', 2}, {'/', 2}};

stack<int> nums;
stack<char> op;

void eval()
{
	int a = nums.top();
	nums.pop();
	
	int b = nums.top();
	nums.pop();
	
	char ch = op.top();
	op.pop();
	int res = 0;
	if(ch == '+') res = a + b;
	if(ch == '-') res = b - a;
	if(ch == '*') res = a * b;
	if(ch == '/') res = b / a;
	
	nums.push(res); 
}


int main()
{
	string a;
	cin >> a;
	for(int i = 0; i < a.size(); i++)
	{
		if(isdigit(a[i]))
		{
			int x = 0, j = i;
			while(j < a.size() && isdigit(a[j]))
			{
				x = x * 10 + a[j++] - '0';
			}
			nums.push(x);
			i = j - 1;
		}
		else if(a[i] == '(')
		{
			op.push(a[i]);
		}
		else if(a[i] == ')')
		{
			while(op.top() != '(')
			{
				eval();
			}
			op.pop();
		}
		else
		{
			while(op.size() && priority[op.top()] >= priority[a[i]])
			{
				eval();
			}
			op.push(a[i]);
		}
	}
	while(op.size()) eval();
	cout << nums.top();
	return 0; 
  }  
