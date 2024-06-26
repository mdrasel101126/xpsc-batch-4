#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int ans = 0;
        while (r > 1)
        {
            ans++;
            r = r / 2;
        }

        cout << ans;
        cout << "\n";
    }

    return 0;
}