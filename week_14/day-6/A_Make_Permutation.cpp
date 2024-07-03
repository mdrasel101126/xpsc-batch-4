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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        bool isPos = true;
        for (int i = 0; i < n; i++)
        {
            if ((i + 1) - v[i] < 0)
            {
                isPos = false;
                break;
            }
        }
        if (isPos)
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