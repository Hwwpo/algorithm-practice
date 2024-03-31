#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;

unordered_map<char, int> priority{{'+', 1}, {'-', 1}, {'*', 2}, {'/', 2}};
stack<int> nums;
stack<char> op;

void eval()
{
	int res = 0;
	int a = nums.top();
	nums.pop();
	
	int b = nums.top();
	nums.pop();
	
	int ch = op.top();
	op.pop();
	
	if(ch == '+') res = a + b;
	else if(ch == '-') res = b - a;
	else if(ch == '*') res = a * b;
	else res = b / a;
	
	nums.push(res);
}

int main()
{
	string a;
	cin >> a;
	for(int i = 0; i < a.size(); i++)
	{
		char ch = a[i];
		if(isdigit(ch))
		{
			int x = 0, j = i;
			while (j < a.size() && isdigit(a[j])) {
				x = x * 10 + a[j++] - '0';
			}
			nums.push(x);
			i = j - 1;
		}
		else if (ch == '(')
		{
			op.push(ch);
		}
		else if(ch == ')')
		{
			while (op.top() != '(') {
				eval();
			}
			op.pop();
		}
		else {
			while (op.size() && priority[op.top()] >= priority[ch]) {
				eval();
			}
			op.push(ch);
		}
	}
	while (op.size()) {
		eval();
	}
	cout << nums.top();
	return 0;
}