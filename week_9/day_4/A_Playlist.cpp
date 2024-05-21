#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll v[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    set<ll> s;
    int cnt = 0, ans = 0, k = 0;

    for (ll i = 0; i < n; i++)
    {
        if (s.count(v[i]) == 0)
        {
            cnt++;
            s.insert(v[i]);
        }
        else
        {
            ans = max(ans, cnt);
            while (v[k] != v[i])
            {
                s.erase(v[k]);
                cnt--;
                k++;
            }
            k++;
        }
    }
    ans = max(ans, cnt);
    cout << ans;
    return 0;
}
