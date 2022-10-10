//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	char ISBN[13];
//	int rec = 0;
//	int count = 1;
//	for (int i = 0; i < 13; i++)
//	{
//		cin >> ISBN[i];
//	}
//	for (int i = 0; i < 12; i++)
//	{
//		if (ISBN[i] >= '0' && ISBN[i] <= '9')
//		{
//			rec += (int(ISBN[i])-48) * count;
//			count++;
//		}
//	}
//	rec %= 11;
//	if (rec == int(ISBN[12]) - 48 || (rec == 10 && ISBN[12] == 'X'))
//	{
//		cout << "Right";
//	}
//	else
//	{
//		for (int i = 0; i < 12; i++)
//		{
//			cout << ISBN[i];
//		}
//		if (rec == 10)
//		{
//			cout << "X";
//		}
//		else
//		{
//			cout << rec;
//		}
//	}
//	return 0;
//}