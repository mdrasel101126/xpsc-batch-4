#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n], sm = 0, bg = 0, mx = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            mx = max(mx, arr[i]);
        }
        if (mx == arr[0])
        {
            bg = arr[0];
            sm = arr[1];
        }
        else
        {
            sm = arr[0];
        }
        for (ll i = 0; i < n; i++)
        {
            if (arr[i] >= bg)
            {
                sm = bg;
                bg = arr[i];
            }
            else
            {
                sm = arr[i];
            }
        }
        cout << sm + bg;
        cout << "\n";
    }

    return 0;
}