#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    a[j] = 0;
                }
            }
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                cnt++;
            }
        }
        int ans = n - cnt;
        if (cnt % 2 == 1)
        {
            ans--;
        }
        cout << ans << "\n";
    }

    return 0;
}