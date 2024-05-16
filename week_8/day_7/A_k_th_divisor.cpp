#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> div;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            div.push_back(i);
            if (i != n / i)
            {
                div.push_back(n / i);
            }
        }
    }
    sort(div.begin(), div.end());
    if (k > div.size())
    {
        cout << -1;
    }
    else
    {
        cout << div[k - 1];
    }
    return 0;
}