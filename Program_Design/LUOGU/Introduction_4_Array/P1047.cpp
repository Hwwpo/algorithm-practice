#include <iostream>
using namespace std;
int road[10000 + 10];
int main(int argc, char *argv[]) {
	int l, m;
	cin >> l >> m;
	while(m--){
		int L, R;
		cin >> L >> R;
		for(int i = L; i <= R; i++)
			road[i] = 1;
	}
	int count = 0;
	for(int i = 0; i <= l; i++)
		if(road[i] == 0)
			count++;
	cout << count;
	return 0;
}