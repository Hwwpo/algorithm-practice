//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//
//using namespace std;
//
//const int N = 1010;
//
//int n, m, q;
//int A[N][N];
//
//int main()
//{
//	scanf("%d%d%d", &n, &m, &q);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; i <= m; j++)
//		{
//			scanf("%d", &A[i][j]);
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			A[i][j] += A[i - 1][j] + A[i][j - 1] - A[i - 1][j - 1];
//		}
//	}
//	while (q--)
//	{
//		int x1, y1, x2, y2;
//		cin >> x1 >> y1 >> x2 >> y2;
//		printf("%d\n", A[x2][y2] - A[x1 - 1][y2] - A[x2][y1 - 1] + A[x1 - 1][y1 - 1]);
//	}
//	return 0;
//}