#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        vector<ll> v(n);
        vector<ll> v1(n);
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end(), greater<ll>());
        for (ll i = 0; i < n; i++)
        {
            sum += v[i];
            v1[i] = sum;
        }

        while (q--)
        {
            ll a;
            cin >> a;
            ll l, r, mid;
            l = 0;
            r = n - 1;
            ll idx = -1;
            while (l <= r)
            {
                mid = (l + r) / 2;
                if (a <= v1[mid])
                {
                    idx = mid;
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            if (idx == -1)
            {
                cout << idx;
            }
            else
            {
                cout << idx + 1;
            }

            cout << "\n";
        }
    }

    return 0;
}