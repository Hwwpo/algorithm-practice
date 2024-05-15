// -*- coding: utf-8 -*-
// @AUTHOR: ppy
#include <iostream>
using namespace std;
int n;
string s;
int mark[110];
int main(int argc, char *argv[]) {
	cin >> n >> s;
//	string temp = "";
	int res = 0;
	// 特例
	if(n == 1){
		cout << '0';
		return 0;
	}
	// 计算 "VK" 的个数并在mark中标记
	for(int i = 0; i < n; i++){
		if(s[i] == 'V' && s[i + 1] == 'K'){
			res++;
			s[i] = 'X';
			s[i + 1] = 'X';
		}
	}
//	cout << s << endl;
//	for(int i = 0; i < s.length(); i++) cout << mark[i];
//	int pos = 0;
//	int count = 0;
//	while (s.find("VK", pos) != string::npos) {
//		count++;
//		pos = s.find("VK", pos) + 1;
//	}
//	cout << count << endl;
//	cout << mark[s.find("VV")] << mark[s.find("VV") + 1];
//	cout << temp;
	// 删除后只有出现 "KK" "VV" 且不影响标记的 "VK" 时才可以修改
	for(int i = 0; i < n; i++){
		if(s[i] != 'X'&& s[i] == s[i + 1]){
			res++;
			break;
		}
	}
//	int pos = 0;
//	while(s.find("VV", pos) != string::npos||s.find("KK", pos) != string::npos){
//		if((!mark[s.find("VV", pos)] && !mark[s.find("VV", pos) + 1]) || (!mark[s.find("KK", pos)] && !mark[s.find("KK", pos) + 1])){
//			res++;break;
//		}
//		pos = min(s.find("VV", pos), s.find("KK", pos)) + 1;
//	}
	cout << res;
	return 0;
}