#include <bits/stdc++.h>
#define ll long long int
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
    ll l = 0, r = 0, cnt1 = 0, cnt2 = 0, ans = 0;
    while (l < n && r < m)
    {
        cnt1 = 0;
        ll curr = a[l];
        while (a[l] == curr && l < n)
        {
            cnt1++;
            l++;
        }
        while (b[r] < curr && r < m)
        {
            r++;
        }
        cnt2 = 0;
        while (b[r] == curr && r < m)
        {
            cnt2++;
            r++;
        }

        ans += (cnt1 * cnt2);
    }
    cout << ans;

    return 0;
}