#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[]) {
	vector<int> a;
	int temp;
	cin >> temp;
	while (temp != 0) {
		a.push_back(temp);
		cin >> temp;
	}
	vector<int>::reverse_iterator iter = a.rbegin();
	for(;iter != a.rend(); ++iter)
		cout << *iter << ' ';
	return 0;
}