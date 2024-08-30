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
        if (v[0] == v[n - 1])
        {
            cout << "NO";
        }
        else
        {
            cout << "YES" << "\n";
            cout << v[n - 1] << " ";
            for (int i = 0; i < n - 1; i++)
            {
                cout << v[i] << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}

/* t = int(input())
for i in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    if a[0] == a[n - 1]:
        print('NO')
    else:
        print('YES')
        print(a[n - 1], end = ' ')
        print(*(a[0:n-1])) */