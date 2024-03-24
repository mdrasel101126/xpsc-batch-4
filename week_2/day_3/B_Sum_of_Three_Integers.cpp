#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, target;
    cin >> n >> target;
    ll cnt = 0;
    for (ll i = 0; i <= n; i++)
    {
        ll x = i;
        for (ll j = 0; j <= n; j++)
        {
            ll y = j;
            ll z = target - x - y;
            if (z >= 0 && z <= n)
            {
                cnt++;
            }
        }
    }
    cout << cnt;

    return 0;
}