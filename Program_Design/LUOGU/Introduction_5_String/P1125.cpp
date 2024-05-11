// -*- coding: utf-8 -*-
// @AUTHOR: ppy
#include <iostream>
using namespace std;
int mp[30];
string s;
bool judge(int n){
	if (n < 2)
		return false;
	for(int i = 2; i < n / 2; i++)
		if(n % i == 0)
			return false;
	return true;
}
int main(int argc, char *argv[]) {
	int maxn = 0, minn = 0x3fffffff;
	cin >> s;
	for(auto c:s)
		mp[c - 'a']++;
	for(auto n:mp){
		if(n && n > maxn)
			maxn = n;
		else if(n && n < minn)
			minn = n;
	}
//	cout << "maxn:" << maxn << "minn:" << minn;
	if(judge(maxn - minn))
		cout << "Lucky Word" << endl << maxn - minn;
	else
		cout << "No Answer" << endl << '0';
	return 0;
}