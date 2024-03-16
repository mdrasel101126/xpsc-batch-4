#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int countZero = 0;
    if (n / 1000 > 0)
    {
        countZero = 0;
    }
    else if (n / 100 > 0)
    {
        countZero = 1;
    }
    else if (n / 10 > 0)
    {
        countZero = 2;
    }
    else
    {
        countZero = 3;
    }

    if (countZero)
    {
        for (int i = 1; i <= countZero; i++)
        {
            cout << 0;
        }
        cout << n;
    }
    else
    {
        cout << n;
    }

    return 0;
}