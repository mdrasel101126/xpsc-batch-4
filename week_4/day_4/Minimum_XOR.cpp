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
        int arr[n];
        int XOR = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            XOR ^= arr[i];
        }
        int ans = XOR;
        for (int i = 0; i < n; i++)
        {
            ans = min(ans, XOR ^ arr[i]);
        }
        cout << ans << "\n";
    }

    return 0;
}