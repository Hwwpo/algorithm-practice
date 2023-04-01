#include<iostream>

using namespace std;

int main()
{
	int card[10] = {2021, 2021, 2021, 2021, 2021, 2021, 2021, 2021, 2021, 2021};
	int st = 1;
	for(int st = 1; ;st ++)
	{
		int t = st;
		while(t)
		{
			card[t % 10]--;
			t /= 10;
		}
		for(int i = 0; i < 10; i++)
		{
			if(card[i] < 0)
			{
				cout << st;
				return 0;
			}
		}
	}
}
