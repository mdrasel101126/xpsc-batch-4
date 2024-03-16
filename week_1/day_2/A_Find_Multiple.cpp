#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int res;
    bool isExist = false;
    for (int i = a; i <= b; i++)
    {
        if (i % c == 0)
        {
            isExist = true;
            res = i;
            break;
        }
    }
    if (isExist)
    {
        cout << res;
    }
    else
    {
        cout << -1;
    }

    return 0;
}