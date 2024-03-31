#include <iostream>

using namespace std;

const int N = 1e5 + 10;

int n;
int p[N];
int s[N];

int main()
{
	cin >> n;
	for(int i = 0; i < n; i++) cin >> p[i];
	int res = 0;
	for(int i = 0, j = 0; i < n; i++)
	{
		s[p[i]]++;
		while(s[p[i]] > 1)
		{
			s[p[j]]--;
			j++;
		}
		
		res = max(res, i - j + 1);
	}
	cout << res << endl;
	return 0;
	
}