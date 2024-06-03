#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    vector<ll> checkDiffArray(n + 1);
    for (ll i = 0; i < q; i++)
    {
        ll l, r;
        cin >> l >> r;
        checkDiffArray[l - 1]++;
        checkDiffArray[r]--;
    }
    for (ll i = 1; i <= n; i++)
    {
        checkDiffArray[i] = checkDiffArray[i] + checkDiffArray[i - 1];
    }
    multiset<ll> ml;
    for (ll i = 0; i < n; i++)
    {
        ml.insert(checkDiffArray[i]);
    }
    ll i = 0;
    ll ans = 0;
    for (auto a : ml)
    {
        ans += (1ll * a * arr[i]);
        i++;
    }
    cout << ans;
    return 0;
}