#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll ans = 0;
        for (int i = 0; i <= n - k; i++)
        {
            bool isOdd = false;
            for (int j = i; j < k + i; j++)
            {
                if ((v[j] >> 0) & 1)
                {
                    isOdd = true;
                    break;
                }
            }
            if (isOdd)
            {
                ans++;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}