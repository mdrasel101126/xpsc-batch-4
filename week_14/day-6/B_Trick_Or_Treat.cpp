#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll ans = 0;
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            ll candi;
            cin >> candi;
            if ((candi % m))
            {
                mp[(candi % m)]++;
            }
            else
            {
                mp[m]++;
            }
        }

        for (ll i = 0; i < n; i++)
        {
            ll choco;
            cin >> choco;
            choco = choco % m;
            int need = m - choco;
            ans += mp[need];
        }
        cout << ans;
        cout << "\n";
    }

    return 0;
}