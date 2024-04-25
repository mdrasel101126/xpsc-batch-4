#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> v(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        sum += a;
        v[i] = sum;
    }
    ll q;
    cin >> q;
    while (q--)
    {
        ll x;
        cin >> x;
        ll l, r, mid;
        l = 0;
        r = n - 1;
        ll idx = -1;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (x <= v[mid])
            {
                idx = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << idx + 1 << "\n";
    }

    return 0;
}