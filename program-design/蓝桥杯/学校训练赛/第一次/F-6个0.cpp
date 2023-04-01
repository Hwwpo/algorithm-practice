#include<iostream>
using namespace std;

int lowbit(int n)
{
    return n & -n;
}

int main()
{
    for(int n = 2023; ;n++)
    {
        if(lowbit(n) == 1 << 6)
        {
            cout << n;
            return 0;
        }
    }
}
