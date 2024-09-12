#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, a, b;
    cin >> n >> a >> b;
    auto ok = [&](ll p)
    {
        if ((a / p) == 0 || (b / p) == 0)
            return false;

        ll plates = (a / p) + (b / p);
        if (plates >= n)
        {
            return true;
        }
        else
            return false;
    };
    ll ans = 0;
    ll l = 1, r = max(a, b), mid;
    while (l <= r)
    {
        mid = (l + r) / 2;

        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << ans;

    return 0;
}