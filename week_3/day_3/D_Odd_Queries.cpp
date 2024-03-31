#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        vector<ll> a(n + 1);
        ll sum = 0;
        a[0] = 0;
        for (ll i = 1; i <= n; i++)
        {
            ll v;
            cin >> v;
            sum += v;
            a[i] = sum;
        }
        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            ll x = a[r] - a[l - 1];
            ll y = (r - l + 1) * k;
            ll res = sum - x + y;
            if (res % 2 != 0)
            {
                cout << "YES";
            }
            else
            {
                cout << "NO";
            }
            cout << "\n";
        }
    }

    return 0;
}
