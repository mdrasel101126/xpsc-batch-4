#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        bool isIdentical = true;
        for (int i = 0; i < n; i++)
        {
            if ((s1[i] == 'R' && s2[i] == 'B') || (s1[i] == 'B' && s2[i] == 'R') || (s1[i] == 'R' && s2[i] == 'G') || (s1[i] == 'G' && s2[i] == 'R'))
            {
                isIdentical = false;
                break;
            }
        }
        if (isIdentical)
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