//#include<iostream>
//
//using namespace std;
//
//// շת���
//int Gcd(int m, int n)
//{
//	int rem;	// ����
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
//	// ����
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
//	// �����Լ��
//	int gcd = Gcd(c, a);
//	a /= gcd;
//	c /= gcd;
//	cout << a << "/" << c;
//	return 0;
//}