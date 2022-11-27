#include<iostream>

using namespace std;

int main()
{
	string A;
	cin >> A;
	for(int i = A.size() - 1; i >= 0; i--) cout << A[i];
	return 0;
}
