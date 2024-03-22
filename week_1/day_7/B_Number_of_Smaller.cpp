#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    vector<ll> b(m);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    ll l = 0, r = 0, ans = 0;
    while (r < m)
    {
        while (b[r] > a[l] && l < n)
        {
            ans++;
            l++;
        }
        r++;
        cout << ans << " ";
    }

    return 0;
}