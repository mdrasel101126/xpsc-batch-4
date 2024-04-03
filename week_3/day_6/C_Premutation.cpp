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
        vector<int> ans(n);
        vector<int> v[n + 1];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                int a;
                cin >> a;
                v[a].push_back(j);
            }
        }

        for (int i = 1; i <= n; i++)
        {
            sort(v[i].begin(), v[i].end());
            int mx = v[i][v[i].size() - 1];
            int min = v[i][0];
            if (mx == min && mx == 0)
            {
                ans[0] = i;
            }
            else if (mx == min && mx == n - 2)
            {
                ans[n - 1] = i;
            }
            else
            {
                ans[mx] = i;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}