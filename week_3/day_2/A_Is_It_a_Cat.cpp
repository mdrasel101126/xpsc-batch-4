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
        string s;
        cin >> s;
        bool isPossible = true;
        vector<char> v;
        for (int i = 0; i < n; i++)
        {
            char ch = tolower(s[i]);
            s[i] = ch;
        }
        v.push_back(s[0]);
        for (int i = 1; i < n; i++)
        {
            char ch = v[v.size() - 1];
            if (ch == s[i])
            {
                continue;
            }
            else
            {

                v.push_back(s[i]);
            }
        }
        if (v.size() == 4)
        {
            if (v[0] != 'm')
            {
                isPossible = false;
            }
            else if (v[1] != 'e')
            {
                isPossible = false;
            }
            else if (v[2] != 'o')
            {
                isPossible = false;
            }
            else if (v[3] != 'w')
            {
                isPossible = false;
            }
        }
        else
        {
            isPossible = false;
        }
        if (isPossible)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }

        cout << "\n";
    }

    return 0;
}