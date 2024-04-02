#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll r, c;
        cin >> r >> c;
        ll arr[r][c];
        for (ll i = 0; i < r; i++)
        {
            for (ll j = 0; j < c; j++)
            {
                cin >> arr[i][j];
            }
        }
        ll ans = 0;
        for (ll i = 0; i < r; i++)
        {
            for (ll j = 0; j < c; j++)
            {
                ll sum = arr[i][j];
                ll m = i;
                ll n = j;
                // upper left value
                while (m > 0 && n > 0)
                {
                    sum += arr[m - 1][n - 1];
                    m--;
                    n--;
                }
                // lower left value
                m = i;
                n = j;
                while (m < r - 1 && n > 0)
                {
                    sum += arr[m + 1][n - 1];
                    m++;
                    n--;
                }
                // upper right value
                m = i;
                n = j;
                while (m > 0 && n < c - 1)
                {
                    sum += arr[m - 1][n + 1];
                    m--;
                    n++;
                }
                // lower right value
                m = i;
                n = j;
                while (m < r - 1 && n < c - 1)
                {
                    sum += arr[m + 1][n + 1];
                    m++;
                    n++;
                }
                ans = max(ans, sum);
            }
        }
        cout << ans << "\n";
    }

    return 0;
}