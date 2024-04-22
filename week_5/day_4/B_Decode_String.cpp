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
        for (int i = 0; i < n; i++)
        {
            if (i < n - 1 && s[i + 2] == '0' && s[i + 3] != '0')
            {
                int charPos = (+s[i] - 48) * 10 + (+s[i + 1] - 48) + 96;
                char ch = charPos;
                cout << ch;
                i += 2;
            }
            else
            {
                char ch = (+s[i] - 48) + 96;
                cout << ch;
            }
        }
        cout << "\n";
    }

    return 0;
}