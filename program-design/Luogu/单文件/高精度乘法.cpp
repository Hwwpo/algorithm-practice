#include<iostream>

using namespace std;

int a[10000], b[10000], c[10000], la, lb, lc;
string x,y;

int main()
 {
 	cin>>x>>y;
 	la = x.length();
 	lb = y.length();
 	for(int i = 1; i<=la; i++)
 	{
 		a[la-i] = x[i-1] - '0';
	 }
	for(int i = 1; i<=lb; i++)
	{
		b[lb-i] = y[i-1] - '0';
	}
	for(int i = 0; i<la; i++)
	{
		for(int j =0; j < lb; j++)
		{
			c[i+j] += a[i] * b[j];
			c[i+j+1] += c[i+j] /10;
			c[i+j] %= 10;  
		}
	}
	lc = la+lb;
	while(!c[lc-1]&&lc>1)
	{
		lc--;
	}
	
	for(int i =lc-1; i>=0; i--)
	{
		cout<<c[i];
	}
	return 0;
 }
