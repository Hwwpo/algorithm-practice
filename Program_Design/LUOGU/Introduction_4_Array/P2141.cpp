#include <iostream>
#include <algorithm>
using namespace std;
#define N 110
int a[N];
int judge[10010];
int main(int argc, char *argv[]) {
	int n;
	int res = 0;
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	
	for(int i = 0; i < n; i++)
		for(int j = i + 1; j < n; j++)
			for(int k = n - 1; k > j; k--)
				if(a[i] + a[j] == a[k]){
					if(judge[a[k]] == 0){
						res++;
						judge[a[k]]++;
					}
				}
	cout << res;
	return 0;
}