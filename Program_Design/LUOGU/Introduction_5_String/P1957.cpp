// -*- coding: utf-8 -*-
// @AUTHOR: ppy
#include <iostream>
using namespace std;
int n;

void process(char mode, int a, int b){
	string temp = "";
	if(mode == 'a')
		temp = to_string(a) + '+' + to_string(b) + '=' + to_string(a + b);
	else if(mode == 'b')
		temp = to_string(a) + '-' + to_string(b) + '=' + to_string(a - b);
	else
		temp = to_string(a) + '*' + to_string(b) + '=' + to_string(a * b);
	cout << temp << endl << temp.length() << endl;;
}

int main(int argc, char *argv[]) {
	cin >> n;
	char mode;
	string temp;
	int fir, sec;
	while(n--){
		cin >> temp;
		if(temp[0] == 'a' || temp[0] == 'b' || temp[0] == 'c'){
			mode = temp[0];
			cin >> fir >> sec;
		}
		else{
			fir = stoi(temp); // 将字符串转为数字
			cin >> sec;
		}
		process(mode, fir, sec);
	}
	return 0;
}