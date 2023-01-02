#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

string st, ed;
string backup;

void move(int x)
{
	st[x] = st[x] == 'o' ? '*' : 'o';
	st[x + 1] = st[x + 1] == 'o' ? '*' : 'o';
}

int main()
{
	cin >> st >> ed;
	
	int res = 0;
	
	for(int i = 0; i < st.length() - 1; i++)
	{
		if(st[i] == ed[i]) continue;
		move(i);
		res++;
	}
	cout << res << endl;
	return 0;
}
