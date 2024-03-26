#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        int open = 0;
        int close = 0;
        for (int i = 0; i < n; i++)
        {
            char ch;
            cin >> ch;
            if (ch == '(')
            {
                open++;
            }
            else
            {
                if (open >= 1)
                {
                    open--;
                }
                else
                {
                    ans++;
                }
            }
        }
        cout << ans << "\n";
    }

    return 0;
}