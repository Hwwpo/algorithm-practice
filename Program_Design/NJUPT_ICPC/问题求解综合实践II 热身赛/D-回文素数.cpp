#include<iostream>

using namespace std;

int prime(int n)
{
	if (n == 2) return 1;
	for (int i = 2; i*i <= n; i++)
	{
		if (n % i == 0) return 0;
	}
	return 1;
	/*int factor = 1;
	for (int i = 2; i < n; i++)
	{
		factor = (long long)factor * i % n;
	}
	factor = (factor + 1) % n;
	return factor == 0;*/
}

int palindrome(int n)
{
	int a[20];
	int b = 1;
	while (n)
	{
		a[b] = n % 10;
		n /= 10;
		b++;
	}
	/*for (int i = 0; n; i++)
	{
		a[i] = n % 10;
		n /= 10;
		b = i;
	}*/
	for (int i = 1; i <= b/2; i++)
	{
		if (a[i] != a[b - i]) return 0;
	}
	return 1;

}

int judge_num(int n)
{
	if ((1000 <= n && n <= 9999) || (100000 <= n && n <= 999999)) return 0;
	return 1;
	/*int a = 0;
	while (n)
	{
		n /= 10;
		a++;
	}
	return a % 2 == 0 ? 1 : 0;*/
}
int main()
{
	int a, b;
	cin >> a >> b;
	if (a == 2) cout << a<<'\n';
	if (a % 2 == 0) a += 1;
	b = min(9999999, b);
	for (int i = a; i <= b; i+=2)
	{
		if (judge_num(i)==0) continue;
		if (palindrome(i)==0) continue;
		if (prime(i)==0) continue;
		printf("%d\n",i);
	}
	return 0;
}
