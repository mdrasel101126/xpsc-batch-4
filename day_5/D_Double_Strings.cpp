#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<string> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<string, int> mp;
        vector<int> ans(n);
        for (ll i = 0; i < n; i++)
        {
            mp[a[i]]++;
        }
        for (ll i = 0; i < n; i++)
        {
            bool isExist = false;

            if (a[i].size() > 1)
            {
                for (int j = 1; j < a[i].size(); j++)
                {
                    string z = a[i];

                    string x = z.substr(0, j);
                    string y = z.substr(j);
                    // cout << x << " " << y << "\n";

                    if (mp[x] > 0 && mp[y] > 0)
                    {
                        isExist = true;
                        break;
                    }
                }
            }
            if (isExist)
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }
        cout << "\n";
    }

    return 0;
}