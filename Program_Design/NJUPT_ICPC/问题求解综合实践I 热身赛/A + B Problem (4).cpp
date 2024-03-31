#include<bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    n = 1;
    while(n)
    {
        cin >> n;
        int res = 0;
        while(n--)
        {
            int a;
            cin >> a;
            res += a;
        }
        cout << res << endl;
    }
    return 0;
}
