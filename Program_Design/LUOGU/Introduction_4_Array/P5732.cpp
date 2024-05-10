// -*- coding: utf-8 -*-
// @AUTHOR: ppy
#include <iostream>
#include <cstring>
using namespace std;
#define N 30
int n;
int a[N];
int backup[N];

void disp(int n){
	for(int i = 0; i < n; i++)
		cout << a[i] << ' ';
	puts("");
}
int main(int argc, char *argv[]) {
	cin >> n;
	a[0] = 1;
	for(int i = 1; i <= n; i++){
		memcpy(backup, a, sizeof(int)*N);
		for(int j = 1; j < i; j++){
			a[j] = backup[j] + backup[j - 1];
		}
		disp(i);
	}
	return 0;
}