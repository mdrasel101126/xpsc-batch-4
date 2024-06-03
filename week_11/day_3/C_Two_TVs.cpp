#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    map<ll, ll> inp;
    for (ll i = 0; i < n; i++)
    {
        ll l, r;
        cin >> l >> r;
        inp[l]++;
        inp[r + 1]--;
    }
    ll sum = 0;
    bool isPos = true;
    for (auto i : inp)
    {
        sum += i.second;
        if (sum > 2)
        {
            isPos = false;
            break;
        }
    }
    if (isPos)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}