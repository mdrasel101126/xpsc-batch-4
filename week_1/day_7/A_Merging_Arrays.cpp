#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, m;
    cin >> n >> m;
    ll arr1[n], arr2[m];
    ll arr[n + m];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    ll l = 0;
    ll r = 0;
    vector<ll> v;
    while (l < n && r < m)
    {
        if (arr1[l] <= arr2[r])
        {
            v.push_back(arr1[l]);
            l++;
        }
        else
        {
            v.push_back(arr2[r]);
            r++;
        }
    }

    while (l < n)
    {
        v.push_back(arr1[l]);
        l++;
    }

    while (r < m)
    {
        v.push_back(arr2[r]);
        r++;
    }

    for (int a : v)
    {
        cout << a << " ";
    }

    return 0;
}