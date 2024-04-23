#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        if (b < c)
        {
            b = (c - b) + c;
        }
        if (a < b)
        {
            cout << 1;
        }
        else if (b < a)
        {
            cout << 2;
        }
        else
        {
            cout << 3;
        }
        // cout << a << " " << b;
        cout << "\n";
    }

    return 0;
}