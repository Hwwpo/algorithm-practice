#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int res[10];
int main(int argc, char *argv[]) {
	int n;
	cin >> n;
	unordered_map <int, bool> m;
	for(int i = 1; i <= 33; i++)
		m[i] = false;
	for(int i = 1; i <= 7; i++){
		int temp;
		cin >> temp;
		m[temp] = true;
	}
	while (n--) {
		vector <int> cupon;
		for(int i = 0; i < 7; i++){
			int temp;
			cin >> temp;
			cupon.push_back(temp);
		}
		int count = 0;
		for(auto item:cupon)
			if(m[item])
				count++;
		res[count]++;
	}
	for(int i = 7; i >= 1; i--)
		cout << res[i] << ' ';
	return 0;
}