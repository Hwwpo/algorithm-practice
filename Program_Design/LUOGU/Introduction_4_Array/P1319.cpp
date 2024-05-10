// -*- coding: utf-8 -*-
// @AUTHOR: ppy
#include <iostream>
#include <cstring>
using namespace std;
#define N 210
int a[N][N];
int n;

int main(int argc, char *argv[]) {
	cin >> n;
	int count = 0;
	bool flag = 0;
	while(count < n * n){
		int x;
		cin >> x;
		if(flag)
			for(int i = count; i < count + x; i++)
				a[i/n][i%n] = 1;
		else
			for(int i = count; i < count + x; i++)
			a[i/n][i%n] = 0;
		flag = !flag;
		count += x;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)
			cout << a[i][j];
		cout << endl;
	}
	return 0;
}