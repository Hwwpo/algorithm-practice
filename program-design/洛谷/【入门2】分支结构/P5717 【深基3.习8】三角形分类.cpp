//#include<iostream>
//
//using namespace std;
//
//void swap(int& a, int& b)
//{
//	a = a + b;
//	b = a - b;
//	a = a - b;
//}
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	if (a > b)
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
//	if (a + b > c && c - b < a)
//	{
//		if (a * a + b * b == c * c)
//		{
//			cout << "Right triangle\n";
//		}
//		else if (a * a + b * b > c * c)
//		{
//			cout << "Acute triangle\n";
//		}
//		else
//		{
//			cout << "Obtuse triangle\n";
//		}
//		if (a == b || a == c || b == c)
//		{
//			cout << "Isosceles triangle\n";
//			if (a == b && a == c)
//			{
//				cout << "Equilateral triangle\n";
//			}
//		}
//	}
//	else
//	{
//		cout << "Not triangle\n";
//	}
//
//	return 0;
//}