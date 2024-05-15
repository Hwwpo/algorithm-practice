// -*- coding: utf-8 -*-
// @AUTHOR: ppy
#include <iostream>
using namespace std;
string s;
int main(int argc, char *argv[]) {
	getline(cin, s);
	int res = 0;
	for(auto c:s){
		if(c == ' ') res++;
		else if(c == 'z') res += 4;
		else if(c == 's') res += 4;
		else if(c < 's'){
			int tap = (int(c - 'a') % 3) + 1;
			res += tap;
		}
		else if(c > 's'){
			int tap = (int(c - 't') % 3) + 1;
			res += tap;
		}
	}
	cout << res;
}