#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        string s;
        cin >> n;
        cin >> s;
        ll arr[n];
        ll ans = 5000;
        for (ll i = 0; i < n - 1; i++)
        {
            int cnt = 0;
            for (ll j = 0; j < n; j++)
            {
                if (j == i)
                {
                    arr[cnt] = 10 * (s[j] - 48) + (s[j + 1] - 48);
                    j++;
                }
                else
                {
                    arr[cnt] = (s[j] - 48);
                }
                cnt++;
            }
            ll vl = 0;
            for (ll j = 0; j < cnt; j++)
            {
                if (arr[j] == 0)
                {
                    vl = -1;
                    break;
                }
                if (arr[j] == 1)
                {
                    continue;
                }
                vl += arr[j];
            }

            if (!vl)
            {
                vl = 1;
            }
            if (vl == -1)
            {
                vl = 0;
            }
            ans = min(ans, vl);
        }
        cout << ans;
        cout << "\n";
    }
    return 0;
}