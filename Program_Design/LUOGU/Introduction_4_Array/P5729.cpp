#include <iostream>

using namespace std;
#define N 25
int cube[N][N][N];

int main(int argc, char *argv[]) {
	int w, x, h;
	int q;
	cin >> w >> x >> h;
	cin >> q;
	while (q--) {
		int x_1, x_2, y_1, y_2, z_1, z_2;
		cin >> x_1 >> y_1 >> z_1 >> x_2 >> y_2 >> z_2;
		for(int i = x_1; i <= x_2; i++)
			for(int j = y_1; j <= y_2; j++)
				for(int k = z_1; k <= z_2; k++)
					cube[i][j][k] = 1;
	}
	int res = 0;
	for(int i = 1; i <= w; i++)
		for(int j = 1; j <= x; j++)
			for(int k = 1; k <= h; k++)
				if(cube[i][j][k] == 0)
					res++;
	cout << res;
	return 0;
}