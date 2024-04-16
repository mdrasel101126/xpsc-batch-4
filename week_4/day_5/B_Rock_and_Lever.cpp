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
        map<int, int> count;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            count[__lg(x)]++;
        }
        long long ans = 0;
        for (auto it = count.begin(); it != count.end(); ++it)
        {
            int y = it->second;
            ans += (1LL * y * (y - 1)) / 2;
        }
        cout << ans << endl;
    }

    return 0;
}