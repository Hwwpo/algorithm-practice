//#include<iostream>
//
//using namespace std;
//
//#define N 10010
//
//int n;
//int arr[N];
//int ans = 0;
//
//int main()
//{
//	cin >> n;
//	int count = 1;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	for (int i = 0; i < n-1; i++)
//	{
//		if (arr[i + 1] - arr[i] == 1)
//			count++;
//		else
//		{
//			if(count>ans) ans = count;
//			count = 1;
//		}
//	}
//	if (count > ans) ans = count;
//	cout << ans;
//	return 0;
//}