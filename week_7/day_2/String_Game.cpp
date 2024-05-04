#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, zlatan = 0, ramos = 0;
        cin >> n;
        string s;
        cin >> s;
        bool zaltanMove = true;
        for (int i = 0; i < n - 1; i += 2)
        {
            if (zaltanMove)
            {
                if (s[i] != s[i + 1])
                {
                    zlatan++;
                    zaltanMove = false;
                }
            }
            else
            {
                if (s[i] != s[i + 1])
                {
                    ramos++;
                    zaltanMove = true;
                }
            }
        }
        // cout << zaltan << " " << ramos;
        if (ramos >= zlatan)
        {
            cout << "Ramos";
        }
        else
        {
            cout << "Zlatan";
        }
        cout << "\n";
    }

    return 0;
}