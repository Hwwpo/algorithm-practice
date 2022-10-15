//#include<iostream>
//
//using namespace std;
//
//int n;
//int a[10000], b[10000], la, lb, l;
//
//int main()
//{
//	cin >> n;
//	b[0] = 1;
//	lb = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 0; j < lb; j++)
//		{
//			b[j] *= i;
//		}
//		for (int j = 0; j < lb; j++)
//		{
//			if (b[j] > 9)
//			{
//				b[j + 1] += b[j] / 10;
//			}
//			b[j] %= 10;
//			
//		}
//		while(b[lb])
//		{
//			lb++;
//			b[lb] += b[lb - 1] / 10;
//			b[lb - 1] %= 10;
//		}
//		la = max(la, lb);
//		for (int j = 0; j < la; j++)
//		{
//			a[j] += b[j];
//		}
//		for (int j = 0; j < la; j++)
//		{
//			if (a[j] > 9)
//			{
//				a[j + 1] += a[j] / 10;
//			}
//			a[j] %= 10;
//
//		}
//		while (a[la])
//		{
//			la++;
//			a[la] += a[la - 1] / 10;
//			a[la - 1] %= 10;
//		}
//		
//	}
//	for (int i = la-1; i >= 0; i--)
//	{
//		cout << a[i];
//	}
//	return 0;
//}