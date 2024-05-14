// -*- coding: utf-8 -*-
// @AUTHOR: ppy
#include <iostream>
#include <string>
using namespace std;
string s;
int q;
int main(int argc, char *argv[]) {
	cin >> q >> s;
	string temp;
	int a, b;
	while (q--) {
		int op;
		cin >> op;
		switch (op) {
			case 1:
				cin >> temp;
				s.append(temp);
				cout << s << endl;
				break;
			case 2:
				cin >> a >> b;
				s = s.substr(a, b);
				cout << s << endl;
				break;
			case 3:
				cin >> a >> temp;
				s.insert(a, temp);
				cout << s << endl;
				break;
			case 4:
				cin >> temp;
				if(s.find(temp) != string::npos)
					cout << s.find(temp) << endl;
				else
					cout << "-1" << endl;
			default:
				break;
		}
	}
}