#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int l, r, mid;
        l = 0;
        r = n - 1;
        int idb = -1;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (b >= v[mid])
            {
                idb = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        l = 0;
        r = n - 1;
        int ida = n;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (a <= v[mid])
            {
                ida = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (idb != -1 && ida != n)
        {
            cout << idb - ida + 1 << " ";
        }
        else
        {
            cout << 0 << " ";
        }
    }

    return 0;
}