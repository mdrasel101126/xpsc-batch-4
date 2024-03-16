#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int res = b - a;
    if (res >= 0)
    {
        cout << res + 1;
    }
    else
    {
        cout << 0;
    }

    return 0;
}