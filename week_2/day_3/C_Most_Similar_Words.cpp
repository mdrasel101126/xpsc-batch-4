#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        vector<string> s(a);
        for (int i = 0; i < a; i++)
        {
            cin >> s[i];
        }

        int ans = INT_MAX;
        for (int i = 0; i < a - 1; i++)
        {
            string s1 = s[i];
            for (int j = i + 1; j < a; j++)
            {
                int cnt = 0;
                string s2 = s[j];
                for (int k = 0; k < b; k++)
                {
                    cnt += abs((s1[k] - 'a') - (s2[k] - 'a'));
                }
                ans = min(cnt, ans);
            }
        }
        cout << ans << "\n";
    }

    return 0;
}