#include<iostream>
#include<string>

using namespace std;

string n;
string ans;

void dfs(string res, int u, int s4, int s7)
{
	if(u == n.size())
	{
	    
		if(res >= n)
		{
			if(res < ans || ans == "")
			{
			    ans = res;
			}
		}
		return;
	}
	
	if(s4 < n.length() / 2) dfs(res + '4', u + 1, s4 + 1, s7);
	if(s7 < n.length() / 2) dfs(res + '7', u + 1, s4, s7 + 1);
}

int main()
{
	cin >> n;
	if(n.length() % 2 != 0) n = '0' + n;
	
	dfs("", 0, 0, 0);
	
	if(ans == "")
	{
		n = "00" + n;
		dfs("", 0, 0, 0);
	}
	
	cout << ans << endl;
	return 0;
}
