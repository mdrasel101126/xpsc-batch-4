#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;

    priority_queue<ll, vector<ll>, greater<ll>> pqOdd;
    priority_queue<ll, vector<ll>, greater<ll>> pqEven;
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        if (a % 2 == 0)
        {
            pqEven.push(a);
        }
        else
        {
            pqOdd.push(a);
        }
    }

    ll sum = 0;
    if (pqOdd.size() % 2 != 0)
    {
        pqOdd.pop();
    }
    while (!pqEven.empty())
    {
        sum = sum + pqEven.top();
        pqEven.pop();
    }

    while (!pqOdd.empty())
    {
        sum = sum + pqOdd.top();
        pqOdd.pop();
    }

    cout << sum;

    return 0;
}