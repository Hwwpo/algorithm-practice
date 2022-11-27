#include<iostream>

using namespace std;

int m[3][3];

int main()
{
	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++)
			cin >> m[i][j];
	
	cout << m[0][2] + m[1][1] + m[2][0] << endl;
	return 0;
}
