#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    int res = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] != s2[i])
        {
            res++;
        }
    }
    cout << res;

    return 0;
}