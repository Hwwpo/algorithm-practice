// -*- coding: utf-8 -*-
// @AUTHOR: ppy
#include <iostream>
#include <string>
using namespace std;
string s;
int main(int argc, char *argv[]) {
	cin >> s;
	for(auto &c:s)
		if(c >= 'a' && c <= 'z')
			c += int('A' - 'a');
	cout << s;
	return 0;
}