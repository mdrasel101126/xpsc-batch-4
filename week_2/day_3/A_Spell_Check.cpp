#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        bool isOk = true;
        int count_T = 0, count_i = 0, count_m = 0, count_u = 0, count_r = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'T')
            {
                count_T++;
            }
            else if (s[i] == 'i')
            {
                count_i++;
            }
            else if (s[i] == 'm')
            {
                count_m++;
            }
            else if (s[i] == 'u')
            {
                count_u++;
            }
            else if (s[i] == 'r')
            {
                count_r++;
            }
            else
            {
                isOk = false;
                break;
            }

            if (count_T > 1 || count_i > 1 || count_m > 1 || count_u > 1 || count_r > 1)
            {
                isOk = false;
                break;
            }
        }
        if (count_T < 1 || count_i < 1 || count_m < 1 || count_u < 1 || count_r < 1)
        {
            isOk = false;
        }
        if (isOk)
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