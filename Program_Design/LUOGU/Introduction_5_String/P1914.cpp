// -*- coding: utf-8 -*-
// @AUTHOR: ppy
#include <iostream>
using namespace std;
int n;
string s;
int main(int argc, char *argv[]) {
	cin >> n >> s;
	for(auto &c:s){
		c = 'a' + int(((c - 'a') + n) % 26);
	}
	cout << s;
	return 0;
}