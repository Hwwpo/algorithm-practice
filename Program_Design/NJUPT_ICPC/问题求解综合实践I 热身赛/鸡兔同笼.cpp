#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, b;
    for(int i = 1; i <= n; i++)
    {
        cin >> a >> b;
        int ans = -1;
        for(int j = 0; j <= a; j++)
        {
            if((b - j * 4) / 2 + j - b == 0)
            {
                ans = j;
                cout << j;
                break;
            }
        }
        if(ans == -1) cout << "Case " << i << ": No answer" << endl;
        else cout << "Case " << i << ": " << ans << endl;
    }
    return 0;
}
