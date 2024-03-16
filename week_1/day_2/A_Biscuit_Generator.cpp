#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int k = a;
    int count = 0;
    while (a <= c)
    {
        count = count + b;

        a = a + k;
    }
    cout << count;

    return 0;
}