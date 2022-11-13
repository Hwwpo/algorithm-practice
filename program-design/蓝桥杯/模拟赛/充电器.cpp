#include<iostream>

using namespace std;

int n, dur;
int U, I;
int main()
{
	cin >> n;
	int hour, minute, second;
	int temp;
	scanf("%d:%d:%d", &hour, &minute, &second);
	scanf("%d%d", &U, &I);
	int res = 0;
	while(n > 1)
	{
		temp = hour * 60 * 60 + minute * 60 + second; 
		scanf("%d:%d:%d", &hour, &minute, &second);
		dur = hour * 60 * 60 + minute * 60 + second - temp;
		res += U * I * dur;
		scanf("%d%d", &U, &I);
		n--;
	}
	cout << res << endl;
}
