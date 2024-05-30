// -*- coding: utf-8 -*-
// @AUTHOR: ppy
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string s;
// 反转一个整数
string rever(string s){
	bool flag = true;
	string ans = "";
	reverse(s.begin(), s.end());
	for(auto c:s){
		if(c == '0' && flag)
			continue;
		if(c != '0' || !flag){
			ans += c;
			flag = false;
		}
	}
	if(s.length() == 1 && s[0] == '0') ans += '0';
	return ans;
}


int main(int argc, char *argv[]) {
	cin >> s;
	// 分数反转
	if(s.find('/') != string::npos){
		string fore = s.substr(0, s.find('/'));
		string back = s.substr(s.find('/') + 1, s.length());
		fore = rever(fore);
		back = rever(back);
		cout << fore << '/' << back;
		return 0;
	}
	// 小数反转
	else if(s.find('.') != string::npos){
		string fore = s.substr(0, s.find('.'));
		string back = s.substr(s.find('.') + 1, s.length());
		string::iterator ri = back.begin();
		while(*ri == '0' && ri != back.end()){
			back.erase(ri);
		}
		fore = rever(fore);
		back = rever(back);
		cout << fore << '.' << back;
		if(back.size() == 0) cout << '0';
	}
	else if(s.find('%') != string::npos){
		string integer = s.substr(0, s.find('%'));
		integer = rever(integer);
		cout << integer << '%';
		return 0;
	}
	else{
		cout << rever(s);
	}
}
