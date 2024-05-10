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
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        bool isPos = true;
        for (int i = 0; i < n; i++)
        {
            if (b[i] - a[i] > 1 || b[i] - a[i] < 0)
            {
                isPos = false;
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