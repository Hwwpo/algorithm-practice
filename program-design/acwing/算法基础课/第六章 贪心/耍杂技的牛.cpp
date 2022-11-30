#include<iostream>
#include<algorithm>
#include<cstring>
#include<utility>

using namespace std;

const int N = 50010;

int n;
pair<int, int> C[N];

int main()
{
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		int w, s;
		scanf("%d%d", &w, &s);
		C[i] = {w + s, w};
	}
	
	sort(C, C + n);
	
	long long res = -2e9, sum = 0;
	
	for(int i = 0; i < n; i++)
	{
		int w = C[i].second, s = C[i].first - w;
		res = max(res, sum - s);
		sum += w;
	}
	
	printf("%d", res);
	return 0;
}
