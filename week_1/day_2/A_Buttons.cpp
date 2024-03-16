#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int mx = max(a, b);
    if (a != b)
    {
        cout << mx + mx - 1;
    }
    else
    {
        cout << a + b;
    }

    return 0;
}