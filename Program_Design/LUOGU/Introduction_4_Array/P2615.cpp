#include <iostream>

using namespace std;
#define N 41
int a[N][N];
int main(int argc, char *argv[]) {
	int n;
	cin >> n;
	a[0][n / 2] = 1;
	int x, y; // 记录上一个数字的位置
	x = 0, y = n / 2;
	for(int i = 2; i <= n * n; i++){
		if(x == 0 && y != n - 1){
			a[n - 1][y + 1] = i;
			x = n - 1, y = y + 1;
		}
		else if(y == n - 1 && x != 0){
			a[x - 1][0] = i;
			x = x - 1, y = 0;
		}
		else if(x == 0 && y == n - 1){
			a[x + 1][y] = i;
			x = x + 1, y = y;
		}
		else if(x != 0 && y != n - 1){
			if(a[x - 1][y + 1] == 0){
				a[x - 1][y + 1] = i;
				x = x - 1, y = y + 1;
			}
			else{
				a[x + 1][y] = i;
				x = x + 1, y = y;
			}
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)
			cout << a[i][j] << ' ';
		puts("");
	}
}