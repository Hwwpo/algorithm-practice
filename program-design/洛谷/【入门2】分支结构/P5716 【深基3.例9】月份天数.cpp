//#include<iostream>
//
//using namespace std;
//
//int judgeLeap(int n)
//{
//	if (n % 4 == 0)
//	{
//		if (n % 100 == 0)
//		{
//			if (n % 400 == 0)
//			{
//				return 1;
//			}
//			else
//			{
//				return 0;
//			}
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//
//int main()
//{
//	int y,m;
//	cin >> y >> m;
//	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
//	{
//		cout << "31";
//		return 0;
//	}
//	if (m == 2)
//	{
//		if (judgeLeap(y))
//		{
//			cout << "29";
//		}
//		else
//		{
//			cout << "28";
//		}
//	}
//	else
//	{
//		cout << "30";
//	}
//	return 0;
//}