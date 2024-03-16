#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll arr2[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        arr2[i] = sum;
    }
    ll res = 0;
    for (ll i = 0; i < n; i++)
    {
        if (arr2[i] % 2 == 0 && res < arr2[i])
        {
            res = arr2[i];
        }
    }

    cout << res;

    return 0;
}