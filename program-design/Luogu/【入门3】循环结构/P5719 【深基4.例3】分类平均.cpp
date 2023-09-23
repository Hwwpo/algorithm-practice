//#include<iostream>
//
//using namespace std;
//int main()
//{
//	int n, k;
//	int A, A_num = 0;
//	int B, B_num = 0;
//	double A_aver;
//	double B_aver;
//	cin >> n >> k;
//	A = 0;
//	B = 0;
//	for (int i = 1; i <=n ; i++)
//	{
//		if (i % k == 0)
//		{
//			A += i;
//			A_num++;
//		}
//		else
//		{
//			B += i;
//			B_num++;
//		}
//	}
//	A_aver = A * 1.0 / A_num;
//	B_aver = B * 1.0 / B_num;
//	printf("%.1lf %.1lf", A_aver, B_aver);
//	return 0;
//
//}