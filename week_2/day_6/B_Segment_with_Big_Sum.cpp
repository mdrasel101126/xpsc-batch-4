#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, s;
    cin >> n >> s;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll r = 0, l = 0, sum = 0, ans = INT_MAX;
    while (r < n)
    {
        sum += a[r];
        if (sum >= s)
        {

            ans = min(ans, r - l + 1);
            sum -= a[l];
            l++;
        }

        r++;
    }
    cout << ans;

    return 0;
}