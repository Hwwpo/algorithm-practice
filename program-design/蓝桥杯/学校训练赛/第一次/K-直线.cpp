#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;
typedef pair<PII, int> PIII;

int gcd(int a, int b)
{
	if(b == 0) return a;
	return gcd(b, a%b);
}

int main()
{
	vector<PII> dot;
	set<PIII> s;
	for(int i = 0; i < 20; i++)
		for(int j = 0; j < 21; j++)
			dot.push_back({i, j});
	
	for(int i = 0; i < dot.size(); i++)
		for(int j = i + 1; j < dot.size(); j++)
		{
			int x1 = dot[i].first, y1 = dot[i].second;
			int x2 = dot[j].first, y2 = dot[j].second;
			
			int A = x2 - x1, B = y1 - y2, C = x1 * y2 - x2 * y1;
			int gcdd = gcd(gcd(A, B), C);
			s.insert({{A / gcdd, B / gcdd}, C / gcdd});
		}
	
	cout << s.size();
 } 
