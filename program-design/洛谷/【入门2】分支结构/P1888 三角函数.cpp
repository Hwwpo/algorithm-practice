//#include<iostream>
//
//using namespace std;
//
//// 辗转相除
//int Gcd(int m, int n)
//{
//	int rem;	// 余数
//	while (n>0)
//	{
//		rem = m % n;
//		m = n;
//		n = rem;
//	}
//	return m;
//}
//
//int main()
//{
//	// 排序
//	int a, b, c;
//	cin >> a >> b >> c;
//	if (a>b)
//	{
//		swap(a, b);
//	}
//	if (b > c)
//	{
//		swap(b, c);
//	}
//	if (a > b)
//	{
//		swap(a, b);
//	}
//
//	// 求最大公约数
//	int gcd = Gcd(c, a);
//	a /= gcd;
//	c /= gcd;
//	cout << a << "/" << c;
//	return 0;
//}