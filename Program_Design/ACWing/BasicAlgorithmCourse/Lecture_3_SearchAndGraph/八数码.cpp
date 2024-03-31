#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;

string str;

int bfs(string str)
{
	string end = "12345678x";
	queue<string> p;
	unordered_map<string, int> d;
	p.push(str);
	d[str] = 0;
	int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
	while(p.size())
	{
		auto t = p.front();
		p.pop();
		int distance = d[t];
		if(t == end) return distance;
		int k = t.find('x');
		int a = k / 3, b = k % 3;
		for(int i = 0; i < 4; i++)
		{
			x = a + dx[i];
			y = b + dy[i];
			if(x >= 0 && x < 3 && y >= 0 && y < 3)
			{
				swap(t[3 * x + y], t[k]);
				if(!d[t])
				{
					d[t] = distance + 1;
					p.push(t);
				}
				swap(t[3 * x + y], t[k]);
			}
		}
	}
	return -1;
}



int main()
{
	char ch;
	for(int i = 0; i < 9; i++)
	{
		cin >> ch;
		str += ch;
	}
	
	cout << bfs(str) << endl;
	return 0;
}
