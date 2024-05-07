#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v1(n), v2(n);
        ll ans = 0;
        bool flag = true;
        for (ll i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> v2[i];
        }
        for (ll i = 0; i < n; i++)
        {
            ll diff = v1[i] - v2[i];
            ans = max(ans, diff);
        }

        for (ll i = 0; i < n; i++)
        {
            ll current;
            if (v1[i] - ans < 0)
            {
                current = 0;
            }
            else
            {
                current = v1[i] - ans;
            }
            if (current != v2[i])
            {
                flag = false;
                break;
            }
        }

        if (flag)
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