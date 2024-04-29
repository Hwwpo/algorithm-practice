#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char *argv[]) {
	vector<int> v;
	int n;
	cin >> n;
	v.push_back(n);
	while(n != 1){
		if(n % 2 == 1)
			n = n * 3 + 1;
		else
			n /= 2;
		v.push_back(n);
	}
	vector<int>::reverse_iterator iter = v.rbegin();
	for(;iter != v.rend(); ++iter)
		cout << *iter << ' ';
	return 0;
}