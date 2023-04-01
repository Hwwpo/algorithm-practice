#include<bits/stdc++.h>

using namespace std;


bool prime(int n)
{
    if(n < 2) return false;
    for(int i = 2; i <= n / i; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
	int cnt = 0;
	for(int n = 1; n <= 20210605; n++)
	{
		if(!prime(n)) continue;
		bool flag = true;
		int N = n;
		while(N)
		{
			if(!(N % 10 == 2 || N % 10 == 3 || N % 10 == 5 || N % 10 == 7)) flag = false;
			N /= 10;
		}
		if(flag) cnt++;
	}
	cout << cnt;
}
