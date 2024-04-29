#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, t;
    cin >> n >> t;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    auto ok = [&](ll s)
    {
        ll total = 0;
        for (ll i = 0; i < n; i++)
        {
            total += (s / arr[i]);
        }
        return total >= t;
    };

    ll l = 1, mid, r = 1e18, ans = 0;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans;
    return 0;
}