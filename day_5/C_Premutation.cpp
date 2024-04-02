#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> ans(n + 1);
    vector<int> v[n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            int a;
            cin >> a;
            v[a].push_back(j);
        }
    }
    for (int i = 1; i <= n; i++)
    {
    }

    return 0;
}