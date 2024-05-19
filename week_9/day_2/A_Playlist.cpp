#include <bits/stdc++.h> //not solved
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    set<ll> st;
    ll ans = 0;
    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        if (st.find(v[i]) != st.end())
        {
            cout << cnt << "\n";
            ans = max(ans, cnt);
            cnt = 0;
            st.clear();
        }
        cnt++;
        st.insert(v[i]);
    }
    cout << cnt;
    ans = max(ans, cnt);

    cout << ans;

    return 0;
}