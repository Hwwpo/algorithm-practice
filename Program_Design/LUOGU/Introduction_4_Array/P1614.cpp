#include <iostream>

using namespace std;
#define N 3010
int n, m;
int a[N];
int main(int argc, char *argv[]) {
	cin >> n >> m;
	for(int i = 0; i < n; i++)
		cin >> a[i];
	int res = 0x3fffffff;
	int temp = 0;
	for(int i = 0; i <= n - m; i++){
		for(int j = i; j < i + m; j++){
			temp += a[j];
		}
		res = min(res, temp);
		temp = 0;
	}
	cout << res;
	return 0;
}