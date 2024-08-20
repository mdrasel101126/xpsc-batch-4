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
        char c;
        int cnt = 0;
        int dec = 0;
        int begin = false;
        for (int i = 0; i < n; i++)
        {
            cin >> c;
            if (c == 'B' && !begin)
            {
                begin = true;
                cnt++;
                continue;
            }
            else if (c == 'W' && !begin)
            {
                continue;
            }

            cnt++;
            if (c == 'B')
            {
                dec = 0;
            }
            if (c == 'W')
            {
                dec++;
            }
        }
        cout << cnt - dec << "\n";
    }

    return 0;
}