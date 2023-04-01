#include<iostream>

using namespace std;

int main()
{
	int count = 0;
    int year = 2000;
    int month = 1;
    int day = 1;
    int week = 5; 
    for(int y = year; y <= 2020; y++)
    {
        for(int m = month; m <= 12; m++)
        {
        	if(y == 2020 && m >= 10) break;
            for(int d = day; d <= 31; d++, week = (week + 1) % 7)
            {
                if((m == 2 && d > 28 && (y % 4 != 0 ))||(m == 2 && d > 29)) break;
                else if((m == 4 || m == 6 || m == 9 || m == 11) && d > 30) break;
                if(d == 1 || week + 1 == 1)count += 2;
                else count++;
                cout << y <<'-'<< m <<'-' << d << '-' << week + 1 << '-' << count << endl;
            }
        }
    }
    cout << count;
    return 0;
}
