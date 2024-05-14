// -*- coding: utf-8 -*-
// @AUTHOR: ppy
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string word;
string article;
int main(int argc, char *argv[]) {
	cin >> word;
	getchar();
	getline(cin, article);
	word = " " + word + " ";
	article = " " + article + " ";
	transform(article.begin(), article.end(), article.begin(), [](unsigned char c){ return tolower(c);});
	transform(word.begin(), word.end(), word.begin(), [](unsigned char c){ return tolower(c);});
	int res_p;
	int pos = 0;
	int res_n = 0;
	while(article.find(word, pos) != string::npos){
		if(pos == 0) res_p = article.find(word, 0);
		res_n++;
		pos = article.find(word, pos);
		pos++;
	}
	if(res_n)
		cout << res_n << ' '<< res_p;
	else
		cout << "-1";
	return 0;
}