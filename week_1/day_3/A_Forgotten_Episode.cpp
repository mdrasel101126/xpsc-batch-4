#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n + 1] = {0};
    for (int i = 1; i <= n - 1; i++)
    {
        int a;
        cin >> a;
        arr[a]++;
    }
    int res;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            res = i;
            break;
        }
    }
    cout << res;

    return 0;
}