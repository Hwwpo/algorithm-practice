//#include<iostream>
//
//using namespace std;
//
//int judge(int n)
//{
//	int factor = 1;
//	for (int i = 2; i < n; i++)
//	{
//		factor = (long long)factor*i %n;
//	}
//	factor = (factor + 1) % n;
//	return factor == 0;
//}
//int main()
//{
//	int L;
//	int count = 0;	//质数个数
//	int sum = 0;
//	cin >> L;
//	for (int i = 2; ; i++)
//	{
//		if (judge(i))
//		{
//			sum += i;
//			if (sum <= L)
//			{
//				cout << i << "\n";
//				count++;
//			}
//			else
//			{
//				cout << count;
//				return 0;
//			}
//		}
//	}
//
//}