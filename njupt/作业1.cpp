#include<iostream>

using namespace std;



int a[10] = {1, 3, 5, 46, 47, 55, 89, 90, 100, 134};

int sanfen(int l, int r, int x){
	if(l <= r)
	{
		for(int i = l; i <= r; i ++)
		{
			cout << a[i] << ' ';
		}
		cout << endl;
		int m1 = l + (r - l) / 3;
		int m2 = l + (r - l) * 2 / 3;
		cout << "m1:" << m1 << endl;
		cout << "m2:" << m2 << endl;
		if(x < a[m1]) return sanfen(l, m1 - 1, x);
		else if(x > a[m1] && x < a[m2]) return sanfen(m1 + 1, m2 - 1, x);
		else if(x > a[m2]) return sanfen(m2 + 1, r, x);
		else if(x == a[m1]) return 1;
		else if(x == a[m2]) return 1;
		
	}
	return 0;
}

int main()
{
	cout << sanfen(0, 9, 3);
 } 
