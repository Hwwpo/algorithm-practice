//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<iostream>
//
//using namespace std;
//
//const int N = 110;
//
//int n;
//int q[N], ans[N] = {0};
//
//int main()
//{
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &q[i]);
//	}
//	for (int i = 1; i < n; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			if (q[j] < q[i])
//			{
//				ans[i]++;
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", ans[i]);
//	}
//	return 0;
//}