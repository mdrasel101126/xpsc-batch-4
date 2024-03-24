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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            int v = a[i];
            int a;
            string s;
            cin >> a >> s;
            for (int j = 0; j < a; j++)

            {
                if (v == 9 && s[j] == 'D')
                {
                    v = 0;
                }
                else if (v == 0 && s[j] == 'U')
                {
                    v = 9;
                }
                else if (s[j] == 'D')
                {
                    v++;
                }
                else
                {
                    v--;
                }
            }
            cout << v << " ";
        }
        cout << "\n";
    }

    return 0;
}