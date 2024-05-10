// -*- coding: utf-8 -*-
// @AUTHOR: ppy
#include <iostream>
using namespace std;
#define N 110
int a[N][N];
int n, m, k;
int main(int argc, char *argv[]) {
	cin >> n >> m >> k;
	while(m--){
		int x, y;
		cin >> x >> y;
		for(int i = x  - 2; i <= x + 2; i++)
			if(i > 0 && i <= n)
				a[i][y] = 1;
		for(int i = y - 2; i <= y + 2; i++)
			if(i > 0 && i <= n)
				a[x][i] = 1;
		for(int i = x - 1; i <= x + 1; i++)
			for(int j = y - 1; j <= y + 1; j++)
				if((i > 0 && i <= n) && (j > 0 && j <= n))
					a[i][j] = 1;
	}
	while(k--){
		int x, y;
		cin >> x >> y;
		for(int i = x - 2; i <= x + 2; i++)
			for(int j = y - 2; j <= y + 2; j++)
				if((i > 0 && i <= n) && (j > 0 && j <= n))
					a[i][j] = 1;
	}
	int res = 0;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			if(!a[i][j])
				res++;
	cout << res;
	return 0;
}