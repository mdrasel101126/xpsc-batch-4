#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (ll i = 0; i < k; i++)
    {
        ll a;
        cin >> a;
        ll l, r, mid;
        l = 0;
        r = n - 1;
        int idx = -1;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (a >= v[mid])
            {
                idx = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << idx + 1 << "\n";
    }

    return 0;
}