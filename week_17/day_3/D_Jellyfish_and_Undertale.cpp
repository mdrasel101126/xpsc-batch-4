#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        int tls[n];
        long long int ans = b;
        for (int i = 0; i < n; i++)
        {
            cin >> tls[i];
            ans += min(a - 1, tls[i]);
        }

        cout << ans << endl;
    }

    return 0;
}