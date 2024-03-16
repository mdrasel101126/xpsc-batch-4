#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool isPossible = false;
    for (int i = 1; i <= c; i++)
    {
        if (a * i == c)
        {
            isPossible = true;
            break;
        }
    }
    for (int i = 1; i <= c; i++)
    {
        if (b * i == c)
        {
            isPossible = true;
            break;
        }
    }
    for (int i = 1; i <= c; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (a * i + b * j == c)
            {
                isPossible = true;
                break;
            }
        }
        if (isPossible)
        {
            break;
        }
    }
    if (isPossible)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}