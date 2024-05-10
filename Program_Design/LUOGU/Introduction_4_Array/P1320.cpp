// -*- coding: utf-8 -*-
// @AUTHOR: ppy
#include <iostream>
using namespace std;
#define N (210)
string s;
int n;
int res[N];
int main(int argc, char *argv[]) {
	string temp;
	int k = 0;
	bool flag = 0;
	int count = 0;
	cin >> temp;
	n = temp.length();
	res[k++] = n;
	for(int i = 1; i < n; i++){
		s.append(temp);
		cin >> temp;
	}
	s.append(temp);
	for(int i = 0; i < s.length(); i++){
		if(!flag){ // 计算0的数目
			if(s[i] == '0')
				count++;
			else{
				flag = !flag;
				i--;
				res[k++] = count;
				count = 0;
			}
		}
		else{ // 计算1的数目
			if(s[i] == '1')
				count++;
			else{
				flag = !flag;
				i--;
				res[k++] = count;
				count = 0;
			}
		}
	}
	res[k++] = count;
	for(int i = 0; i < k; i++)
		cout << res[i] << ' ';
	return 0;
}