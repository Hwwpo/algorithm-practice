// -*- coding: utf-8 -*-
// @AUTHOR: ppy
#include <iostream>
using namespace std;
int n;
int main(int argc, char *argv[]) {
	cin >> n;
	int res = 0;
	double a, t;
	while(n--){
		cin >> a >> t;
		for(int i = 1; i <= t; i++){
			res ^= int(i * a);
		}
	}
	cout << res;
	return 0;
}