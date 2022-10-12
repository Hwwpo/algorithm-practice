#include<iostream>

using namespace std;


int main()
{
	string x,y;
	int a[10000], b[10000], c[10000], la, lb, lc;
	cin>>x>>y;
	la = x.length();
	lb = y.length();
	for(int i=1; i<=la; i++)
	{
		a[la-i] = x[i-1]-'0';
	}
	for(int i=1; i<=lb;i++)
	{
		b[lb-i] = y[i-1]-'0';
	}
	lc = max(la,lb);
	for(int i=0;i<lc;i++)
	{
		c[i]+=a[i]+b[i];
		c[i+1] += c[i]/10;
		c[i]%=10; 
	}
	if(c[lc]) lc++;
	for(int i=1;i<=lc;i++)
	{
		cout<<c[lc-i];
	}
	return 0;
	
}
