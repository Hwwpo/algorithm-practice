#include <iostream>

using namespace std;
int counts[10];
void add(int i){
	while (i != 0) {
		counts[i % 10]++;
		i /= 10;
	}
}
int main(int argc, char *argv[]) {
	int m, n;
	cin >> m >> n;
	for(int i = m; i <= n; i++)
		add(i);
	for(int i = 0; i < 10; i++)
		cout << counts[i] << ' ';
	return 0;
}