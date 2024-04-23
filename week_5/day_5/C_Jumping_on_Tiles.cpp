#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool compareAsending(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}
bool compareDesending(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        vector<pair<int, int>> v;
        int sz = s.size();
        for (int i = 0; i < sz; i++)
        {
            v.push_back({i, s[i] - 'a'});
        }
        /* for (auto x : v)
        {
            cout << x.first << "-" << x.second << " | ";
        }
        cout << "\n"; */
        if (s[0] - 'a' <= s[sz - 1] - 'a')
        {
            sort(v.begin() + 1, v.end() - 1, compareAsending);
        }
        else
        {
            sort(v.begin() + 1, v.end() - 1, compareDesending);
        }

        /* for (auto x : v)
        {
            cout << x.first << "-" << x.second << " | ";
        } */
        int mx = max(s[0] - 'a', s[sz - 1] - 'a');
        int mn = min(s[0] - 'a', s[sz - 1] - 'a');
        // cout << mx << " " << mn << "\n";
        vector<pair<int, int>> ans;
        for (int i = 0; i < sz; i++)
        {
            pair<int, int> x = v[i];
            if (x.second >= mn && x.second <= mx)
            {
                ans.push_back(x);
            }
        }
        cout << mx - mn << " " << ans.size();
        cout << "\n";
        for (auto x : ans)
        {
            cout << x.first + 1 << " ";
        }
        cout << "\n";
    }

    return 0;
}