#include<bits/stdc++.h>

using namespace std;

const int N = 60;

int n;
int a[N];
int main()
{
	cin >> n;
	for(int i = 0; i < n; i++) cin >> a[i];
	
	int left = 0, right = 0;
	for(int i = 1; i < n; i++){
		if(abs(a[i]) > abs(a[0]) && a[i] < 0) left++;
		if(abs(a[i]) < abs(a[0]) && a[i] > 0) right++;
	}
	if((a[0] > 0 && left == 0) || (a[0] < 0 && right == 0)) cout << '1';
	else cout << left + right + 1;
	return 0;
}
