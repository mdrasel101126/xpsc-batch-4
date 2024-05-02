#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[k];
        for (ll i = 0; i < k; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + k);
        ll ans = k, cat = 0;
        for (ll i = k - 1; i >= 0; i--)
        {
            if (cat < arr[i])
                cat += (n - arr[i]);
            else
            {
                ans = k - 1 - i;
                break;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}