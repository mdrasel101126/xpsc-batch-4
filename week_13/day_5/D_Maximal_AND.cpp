#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll inp[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> inp[i];
        }
        map<ll, ll> cnt;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 30; j >= 0; j--)
            {
                if ((inp[i] >> j) & 1)
                {
                    cnt[j]++;
                }
            }
        }
        ll ans = 0;
        for (ll i = 30; i >= 0; i--)
        {
            if (n - cnt[i] <= k)
            {
                ans += (1 << i);
                k -= (n - cnt[i]);
            }
        }
        cout << ans;
        cout << "\n";
    }
    return 0;
}