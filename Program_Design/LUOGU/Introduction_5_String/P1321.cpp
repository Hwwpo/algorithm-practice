// -*- coding: utf-8 -*-
// @AUTHOR: ppy
#include <iostream>
using namespace std;
string s;
int main(int argc, char *argv[]) {
	cin >> s;
	int boy = 0;
	int girl = 0;
	bool flag = false;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == 'b' || s[i + 1] == 'o' || s[i + 2] == 'y') boy++;
		else if(s[i] == 'g' || s[i + 1] == 'i' || s[i + 2] == 'r' || s[i + 3] == 'l') girl++;
	}
	cout << boy << endl << girl;
	return 0;
}