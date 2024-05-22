#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    multiset<ll> tPrice;
    for (int i = 0; i < n; i++)
    {
        ll price;
        cin >> price;
        tPrice.insert(price);
    }

    for (int i = 0; i < m; i++)
    {
        ll mxPrice;
        cin >> mxPrice;
        auto it = tPrice.upper_bound(mxPrice);
        if (it == tPrice.begin())
        {
            cout << -1;
        }
        else
        {
            it--;
            cout << *it;
            tPrice.erase(it);
        }
        cout << "\n";
    }
    return 0;
}