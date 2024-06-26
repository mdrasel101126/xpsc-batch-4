#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<ll, ll> mp;
        ll x;
        for (ll i = 0; i < n; i++)
        {
            cin >> x;
            mp[x]++;
        }
        ll a = 0, b = 0;
        for (auto x : mp)
        {
            if (x.second >= 2)
            {
                b++;
            }
            else
            {
                a++;
            }
        }

        cout << b + (a + 1) / 2;
        cout << "\n";
    }

    return 0;
}