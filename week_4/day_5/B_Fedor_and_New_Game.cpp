#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, m, k, ans = 0;
    cin >> n >> m >> k;
    ll arr[m + 1];
    for (ll i = 0; i < m + 1; i++)
    {
        cin >> arr[i];
    }
    for (ll i = 0; i < m; i++)
    {
        ll count = 0;
        for (ll j = 0; j < n; j++)
        {
            if (((arr[m] >> j) & 1) != ((arr[i] >> j) & 1))
            {
                count++;
            }
        }

        if (count <= k)
        {
            ans++;
        }
    }
    cout << ans;
    return 0;
}