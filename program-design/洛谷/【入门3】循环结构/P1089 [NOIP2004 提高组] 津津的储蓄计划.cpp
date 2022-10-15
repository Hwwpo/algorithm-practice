//#include<iostream>
//
//using namespace std;
//
//#define N 12
//
//int arr[N];
//int money = 0;
//int bank = 0;
//int main()
//{
//	for (int i = 0; i < N; i++)
//	{
//		cin >> arr[i];
//	}
//	for (int i = 0; i < 12; i++)
//	{
//		money += 300;
//		money -= arr[i];
//		if (money < 0)
//		{
//			cout << '-' << i + 1;
//			return 0;
//		}
//		if (money >= 100)
//		{
//			bank += money - money % 100;
//			money = money % 100;
//		}
//	}
//	money += bank * 1.2;
//	cout << money;
//	return 0;
//}