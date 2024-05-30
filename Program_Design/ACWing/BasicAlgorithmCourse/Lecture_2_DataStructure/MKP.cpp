// -*- coding: utf-8 -*-
// @AUTHOR: ppy@ pyaxy0410@163.com
#include <iostream>
using namespace std;
#define N 1000100
int n, m;
char s[N], d[N];
int ne[N];
int main(int argc, char *argv[]) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> d+1 >> m >> s+1;
	
	for(int i = 2, j = 0; i <= n; i++){
		while(j && d[i] != d[j + 1]) j = ne[j];
		if(d[i] == d[j + 1]) j++;
		ne[i] = j;
	}
	for(int i = 1, j = 0; i <= m; i++){
		while(j && s[i] != d[j + 1]) j = ne[j];
		if(s[i] == d[j + 1]) j++;
		if(j == n){
			cout << int( i - n) << ' ';
			j = ne[j];
		}
	}
	return 0;
}