#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    auto ok = [&](ll m)
    {
        ll position = n / 2, op = k;
        while (position < n)
        {
            op -= (m - arr[position]);
            position++;
            if (op < 0)
            {
                return false;
            }
        }
        return true;
    };
    ll r = 1e18, l = 1, ans, mid;

    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans;

    return 0;
}