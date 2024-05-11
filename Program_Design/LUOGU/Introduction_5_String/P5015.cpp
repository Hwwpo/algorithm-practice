// -*- coding: utf-8 -*-
// @AUTHOR: ppy
#include <iostream>
using namespace std;
string s;
int main(int argc, char *argv[]) {
	ios::sync_with_stdio(false);
	getline(cin, s);
	int res = 0;
	for(auto c:s){
		if(isdigit(c))
			res++;
		else if(islower(c))
			res++;
		else if(isupper(c))
			res++;
	}
	cout << res;
	return 0;
}