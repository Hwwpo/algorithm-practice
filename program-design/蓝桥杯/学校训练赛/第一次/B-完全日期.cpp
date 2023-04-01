#include<iostream>

using namespace std;

int main()
{
	int count = 0;
    int year = 2001;
    int month = 1;
    int day = 1;
    for(int y = year; y <= 2021; y++)
    {
        for(int m = month; m <= 12; m++)
        {
            for(int d = day; d <= 31; d++)
            {
                if((m == 2 && d > 28 && y % 4 != 0)||(m == 2 && d > 29)) break;
                else if((m == 4 || m == 6 || m == 9 || m == 11) && d > 30) break;
                int sum = 0;
				int Y = y, M = m, D = d;
				while(Y || M || D)
				{
					if(Y)
					{
						sum += Y % 10;
						Y /= 10;
					}
					if(M)
					{
						sum += M % 10;
						M /= 10;
					}
					if(D)
					{
						sum += D % 10;
						D /= 10;
					}
				 }
				 // cout << y << m << d << '=' <<sum << endl;
				 if(sum == 1) count++;
				 else if(sum == 4) count++;
				 else if(sum == 16) count++;
				 else if(sum == 9) count++;
				 else if(sum == 25) count++;
            }
        }
    }
    cout << count;
    return 0;
}
