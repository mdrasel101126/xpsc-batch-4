#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll a, b;
    cin >> a >> b;
    ll count = 0;
    while (a <= b)
    {
        count++;
        a = a + a;
    }
    cout << count;

    return 0;
}