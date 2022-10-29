#include<iostream>

using namespace std;

const int N = 1e6 + 10;

int stk[N], tt = 0;

void push(int x){
	stk[++tt] = x;
}
void pop()
{
	tt--; 
 } 
bool empty()
{
 	return tt > 0;
 }
int query()
{
	return stk[tt];
}
int main()
{
	int m;
	cin >> m;
	while(m--)
	{
		string op;
		cin >> op;
		if(op == "push")
		{
			int x;
			cin >> x;
			push(x);
		}
		else if(op == "pop")
		{
			pop();
		}
		else if(op == "empty")
		{
			if(!empty()) puts("YES");
			else puts("NO");
		}
		else if(op == "query")
		{
			cout<<query()<<endl;
		}
	}
	return 0;
}
