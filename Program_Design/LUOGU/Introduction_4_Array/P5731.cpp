// -*- coding: utf-8 -*-
// @AUTHOR: ppy
#include <iostream>
using namespace std;
#define N 10
int a[N][N];
int n;
void display(int n){
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++)
			printf("%3d", a[i][j]);
		puts("");
	}
}
int main(int argc, char *argv[]) {
	cin >> n;
	int k = 1;
	int x = 1, y = 0;
	while(k <= n * n){
		while(y < n && !a[x][y + 1])
			a[x][++y] = k++;
		while(x < n && !a[x + 1][y]){
			a[++x][y] = k++;
		}
		while(y > 1 && !a[x][y - 1]) a[x][--y] = k++;
		while(x > 1 && !a[x - 1][y]) a[--x][y] = k++;
	}
	display(n);
	
	return 0;
}