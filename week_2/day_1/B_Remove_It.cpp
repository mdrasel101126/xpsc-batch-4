#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, k;
    cin >> n >> k;
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        if (a != k)
        {
            cout << a << " ";
        }
    }

    return 0;
}