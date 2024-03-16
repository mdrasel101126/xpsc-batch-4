#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        vector<string> s1, s2, s3;
        map<string, int> mp;
        int cnt1 = 0, cnt2 = 0, cnt3 = 0;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {

            string s;
            cin >> s;
            s1.push_back(s);
            mp[s]++;
        }
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            s2.push_back(s);
            mp[s]++;
        }
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            s3.push_back(s);
            mp[s]++;
        }

        for (string a1 : s1)
        {
            int cont = mp[a1];
            if (cont == 1)
            {
                cnt1 = cnt1 + 3;
            }
            if (cont == 2)
            {
                cnt1 = cnt1 + 1;
            }
        }

        for (string a1 : s2)
        {
            int cont = mp[a1];
            if (cont == 1)
            {
                cnt2 = cnt2 + 3;
            }
            if (cont == 2)
            {
                cnt2 = cnt2 + 1;
            }
        }

        for (string a1 : s3)
        {
            int cont = mp[a1];
            if (cont == 1)
            {
                cnt3 = cnt3 + 3;
            }
            if (cont == 2)
            {
                cnt3 = cnt3 + 1;
            }
        }

        cout << cnt1 << " " << cnt2 << " " << cnt3 << "\n";
    }

    return 0;
}