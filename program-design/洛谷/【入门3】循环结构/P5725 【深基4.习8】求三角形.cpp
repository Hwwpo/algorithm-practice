//#include<iostream>
//
//using namespace std;
//
//int n;
//
//int main()
//{
//	cin >> n;
//	int count = 0;
//	int num = 1;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("%02d", num++);
//			count++;
//		}
//		if (count % n == 0 && count)
//		{
//			cout << "\n";
//		}
//	}
//	cout << '\n';
//	num = 1;
//	count = 0;
//	int m = n-1;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			printf("  ");
//			count++;
//		}
//		for (int j = 0; j < n - m; j++)
//		{
//			printf("%02d", num++);
//			count++;
//		}
//		m--;
//		if (count % n == 0 && count)
//		{
//			cout << "\n";
//		}
//	}
//	return 0;
//}