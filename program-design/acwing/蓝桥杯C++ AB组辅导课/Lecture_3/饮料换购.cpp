#include<bits/stdc++.h>

using namespace std;

int n;

int main()
{
	cin >> n;
	int res = n;
	while(n >= 3){
		res += n / 3;
		n = n / 3 + n % 3;
	}
	cout << res;
	return 0;
 } 
