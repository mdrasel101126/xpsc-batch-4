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
        bool isFound = false;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (a == v[mid])
            {
                isFound = true;
                break;
            }
            else if (a > v[mid])
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (isFound)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << "\n";
    }

    return 0;
}